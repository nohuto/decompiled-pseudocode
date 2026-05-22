/*
 * XREFs of ?GetPrimitiveBufferSize@CPrimitiveGroup@DirectComposition@@IEBAJPEAI@Z @ 0x1800337A0
 * Callers:
 *     ?RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ @ 0x180031010 (-RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ.c)
 *     ?GetD2DCommandList@CPrimitiveGroup@DirectComposition@@IEAAJPEAUID2D1DeviceContext@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1800FA130 (-GetD2DCommandList@CPrimitiveGroup@DirectComposition@@IEAAJPEAUID2D1DeviceContext@@PEAPEAUID2D1P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPrimitiveGroup::GetPrimitiveBufferSize(
        DirectComposition::CPrimitiveGroup *this,
        unsigned int *a2)
{
  int v2; // r9d
  unsigned __int64 v3; // r8
  int v5; // edx
  __int64 result; // rax
  unsigned int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // edx
  unsigned __int64 v10; // r10

  v2 = -1;
  v3 = 148LL * *((unsigned int *)this + 62);
  if ( v3 > 0xFFFFFFFF )
    return 2147942934LL;
  v5 = *((_DWORD *)this + 60);
  result = 0LL;
  if ( !v5 )
  {
LABEL_3:
    *a2 = v3;
    return result;
  }
  v10 = 148LL * (unsigned int)(v5 + 1);
  if ( v10 > 0xFFFFFFFF )
    return 2147942934LL;
  v7 = v3 + v10;
  v8 = v3;
  v9 = v3;
  if ( (int)v3 + (int)v10 >= (unsigned int)v3 )
    v2 = v3 + v10;
  LODWORD(v3) = v2;
  result = v7 < v8 ? 0x80070216 : 0;
  if ( v7 >= v9 )
    goto LABEL_3;
  return result;
}
