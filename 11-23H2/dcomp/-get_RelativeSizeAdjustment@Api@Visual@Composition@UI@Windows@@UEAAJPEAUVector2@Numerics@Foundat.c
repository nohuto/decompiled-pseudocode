/*
 * XREFs of ?get_RelativeSizeAdjustment@Api@Visual@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z @ 0x18010D000
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?GetSparse_RelativeSizeAdjustment@Visual@Composition@UI@Windows@@AEBA?AUVector2@Numerics@Foundation@4@XZ @ 0x180088FA0 (-GetSparse_RelativeSizeAdjustment@Visual@Composition@UI@Windows@@AEBA-AUVector2@Numerics@Foundat.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Api::get_RelativeSizeAdjustment(
        Windows::UI::Composition::Visual::Api *this,
        struct Windows::Foundation::Numerics::Vector2 *a2)
{
  char *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this - 176;
  v7 = 0LL;
  *(_QWORD *)a2 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 19);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v2[32] & 2) != 0 )
  {
    Windows::UI::Composition::Visual::GetSparse_RelativeSizeAdjustment((__int64)v2, &v7);
    *(_QWORD *)a2 = v7;
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
