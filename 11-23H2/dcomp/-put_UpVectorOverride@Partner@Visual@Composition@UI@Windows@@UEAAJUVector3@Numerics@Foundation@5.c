/*
 * XREFs of ?put_UpVectorOverride@Partner@Visual@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@5@@Z @ 0x18010D8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?SetSparse_UpVectorOverride@Visual@Composition@UI@Windows@@AEAAXUVector3@Numerics@Foundation@4@@Z @ 0x18010C2C8 (-SetSparse_UpVectorOverride@Visual@Composition@UI@Windows@@AEAAXUVector3@Numerics@Foundation@4@@.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Partner::put_UpVectorOverride(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  int v6; // eax
  int v7; // edx
  DirectComposition::CDevice *v8; // rcx
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+40h] [rbp-18h] BYREF
  int v13; // [rsp+48h] [rbp-10h]

  v2 = a1 - 232;
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 232 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*(_BYTE *)(v2 + 32) & 2) != 0 )
  {
    v6 = *((_DWORD *)a2 + 2);
    v7 = *(_DWORD *)(v2 + 128);
    v8 = *(DirectComposition::CDevice **)(*(_QWORD *)(v2 + 24) + 456LL);
    v10 = *a2;
    v11 = v6;
    DirectComposition::CDevice::ResourceSetBufferProperty(v8, v7, 45, &v10, 0xCuLL);
    v12 = v10;
    v13 = v11;
    Windows::UI::Composition::Visual::SetSparse_UpVectorOverride(v2, (unsigned int *)&v12);
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
