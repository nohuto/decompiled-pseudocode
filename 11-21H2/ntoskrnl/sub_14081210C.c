/*
 * XREFs of sub_14081210C @ 0x14081210C
 * Callers:
 *     sub_140811FE0 @ 0x140811FE0 (sub_140811FE0.c)
 *     sub_1408125C4 @ 0x1408125C4 (sub_1408125C4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403E5D20 (swprintf_s.c)
 *     sub_1408036C8 @ 0x1408036C8 (sub_1408036C8.c)
 *     sub_1408073EC @ 0x1408073EC (sub_1408073EC.c)
 *     sub_1408123B4 @ 0x1408123B4 (sub_1408123B4.c)
 *     sub_140813164 @ 0x140813164 (sub_140813164.c)
 *     sub_1408132F0 @ 0x1408132F0 (sub_1408132F0.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     sub_140813960 @ 0x140813960 (sub_140813960.c)
 *     sub_140A1D75C @ 0x140A1D75C (sub_140A1D75C.c)
 */

__int64 __fastcall sub_14081210C(__int64 a1, char a2, _QWORD *a3)
{
  int v6; // r14d
  unsigned int v7; // esi
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rsi
  int v11; // eax
  __int64 v13; // rcx
  int v14; // eax
  const wchar_t *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-50h]
  wchar_t *v18; // [rsp+20h] [rbp-50h]
  __int64 v19; // [rsp+28h] [rbp-48h]
  __int64 v20; // [rsp+38h] [rbp-38h] BYREF
  __int64 v21; // [rsp+40h] [rbp-30h] BYREF
  wchar_t Dst[12]; // [rsp+48h] [rbp-28h] BYREF

  v21 = 0LL;
  v20 = 0LL;
  v6 = 0;
  if ( (a2 & 0x20) != 0 )
  {
LABEL_19:
    sub_1408138F0(4LL, L"Failed to find a key to load store %s. Last attempted key: %ws", a1 + 12, Dst);
    return (unsigned int)-1073741823;
  }
  v7 = 0;
  while ( 1 )
  {
    swprintf_s(Dst, 0xCuLL, L"BCD%08d", v7);
    v8 = sub_140813960(Dst);
    if ( (v8 & 0x80000000) == 0 )
    {
      sub_1408138F0(2LL, L"Loaded hive at BCD%08d", v7);
      if ( (a2 & 1) == 0 )
      {
LABEL_5:
        v9 = sub_140813164(0LL, L"Description", 131103LL, &v21);
        v10 = v21;
        v8 = v9;
        if ( v9 < 0 )
        {
          v16 = 4LL;
          if ( v9 == -1073741772 )
          {
            sub_1408138F0(4LL, L"A valid store must have a description key.");
            v8 = -1073741476;
          }
          LODWORD(v17) = v8;
          sub_1408138F0(
            v16,
            L"Failed to open description key for store. Store: %s StoreKey: %ws Status: %x",
            a1 + 12,
            Dst,
            v17,
            v19);
        }
        else
        {
          LODWORD(v19) = 24;
          v18 = Dst;
          v11 = sub_1408123B4(v21, L"KeyName", 0LL);
          v8 = v11;
          if ( v11 < 0 )
          {
            LODWORD(v18) = v11;
            sub_1408138F0(
              4LL,
              L"Failed to set description key value. Store: %s StoreKey: %ws Status: %x",
              a1 + 12,
              Dst,
              v18,
              v19);
          }
          else
          {
            *a3 = 0LL;
          }
        }
        if ( v10 )
          sub_1408132F0(v10);
        goto LABEL_10;
      }
      v14 = sub_1408036C8(0LL, L"Objects", 0x20019u, 0, &v20, 0LL);
      v8 = v14;
      if ( v14 >= 0 )
      {
        sub_1408132F0(v20);
        v20 = 0LL;
        v14 = sub_1408036C8(0LL, L"Description", 0x20019u, 0, &v20, 0LL);
        v8 = v14;
        if ( v14 >= 0 )
          goto LABEL_5;
        v15 = L"Failed to initialize description key for store. Store: %s StoreKey: %ws Status: %x";
      }
      else
      {
        v15 = L"Failed to initialize objects key for store. Store: %s StoreKey: %ws Status: %x";
      }
      LODWORD(v17) = v14;
      sub_1408138F0(4LL, v15, a1 + 12, Dst, v17);
LABEL_10:
      if ( v20 )
        sub_1408132F0(v20);
      return v8;
    }
    if ( v8 != -1073741790 )
      break;
    if ( (unsigned __int8)sub_140A1D75C(Dst) )
    {
      v6 = 0;
    }
    else if ( (unsigned int)++v6 >= 0xA )
    {
      sub_1408138F0(4LL, L"Too many unexplained failures. File: %s Last status: %x", a1 + 12, 3221225506LL);
      return v8;
    }
    if ( ++v7 > 0x5F5E0FF )
      goto LABEL_19;
  }
  v13 = 4LL;
  if ( v8 == -1073741809 )
    v13 = 2LL;
  sub_1408138F0(v13, L"Failed to load hive into key %ws from %s. Status: %x", Dst, a1 + 12, v8);
  return v8;
}
