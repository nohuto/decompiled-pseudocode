/*
 * XREFs of ?InternalRelease@?$ComPtr@VCDirtyNotifier@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x180089DAC
 * Callers:
 *     ?NotifyUnderlyingContentChange@SurfaceBindPoint@Composition@UI@Windows@@QEAAXXZ @ 0x18004B320 (-NotifyUnderlyingContentChange@SurfaceBindPoint@Composition@UI@Windows@@QEAAXXZ.c)
 *     ??1SurfaceBindPoint@Composition@UI@Windows@@QEAA@XZ @ 0x180123238 (--1SurfaceBindPoint@Composition@UI@Windows@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<DirectComposition::CDirtyNotifier>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  return result;
}
