/*
 * XREFs of ?IsSystemProductValidForTaskbarIcon@Pinning@Mobility@@YA_NXZ @ 0x18003ABC0
 * Callers:
 *     ??R_lambda_ce3eaa413337f6bd175b4ae2c9280e26_@@QEBAXXZ @ 0x18002DFC8 (--R_lambda_ce3eaa413337f6bd175b4ae2c9280e26_@@QEBAXXZ.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=2
char __fastcall Mobility::Pinning::IsSystemProductValidForTaskbarIcon(Mobility::Pinning *this)
{
  char v1; // bl
  void *pvData; // rdi
  SIZE_T cb; // [rsp+50h] [rbp+8h] BYREF

  v1 = 1;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Hardware\\Description\\System\\BIOS",
          L"SystemProductName",
          2u,
          0LL,
          0LL,
          (LPDWORD)&cb) )
  {
    pvData = CoTaskMemAlloc((unsigned int)cb);
    if ( RegGetValueW(
           HKEY_LOCAL_MACHINE,
           L"Hardware\\Description\\System\\BIOS",
           L"SystemProductName",
           2u,
           0LL,
           pvData,
           (LPDWORD)&cb) )
    {
      if ( pvData )
      {
        CoTaskMemFree(pvData);
        return 1;
      }
    }
    else
    {
      return CompareStringOrdinal((LPCWCH)pvData, -1, L"Surface Go", -1, 1) != 2;
    }
  }
  return v1;
}
