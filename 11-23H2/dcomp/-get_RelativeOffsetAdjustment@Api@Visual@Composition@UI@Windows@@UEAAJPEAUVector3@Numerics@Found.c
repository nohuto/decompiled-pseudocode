/*
 * XREFs of ?get_RelativeOffsetAdjustment@Api@Visual@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@5@@Z @ 0x18010CF60
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?GetSparse_RelativeOffsetAdjustment@Visual@Composition@UI@Windows@@AEBA?AUVector3@Numerics@Foundation@4@XZ @ 0x1800B5C20 (-GetSparse_RelativeOffsetAdjustment@Visual@Composition@UI@Windows@@AEBA-AUVector3@Numerics@Found.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Api::get_RelativeOffsetAdjustment(
        Windows::UI::Composition::Visual::Api *this,
        struct Windows::Foundation::Numerics::Vector3 *a2)
{
  char *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  int v6; // eax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]

  v2 = (char *)this - 176;
  v8 = 0LL;
  *(_QWORD *)a2 = 0LL;
  *((_DWORD *)a2 + 2) = 0;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 19);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v2[32] & 2) != 0 )
  {
    Windows::UI::Composition::Visual::GetSparse_RelativeOffsetAdjustment((__int64)v2, (__int64)&v8);
    v6 = v9;
    *(_QWORD *)a2 = v8;
    *((_DWORD *)a2 + 2) = v6;
    v5 = 0;
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
