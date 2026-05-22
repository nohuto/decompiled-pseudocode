/*
 * XREFs of ?GetCommandBufferSize@CPrimitiveGroup@DirectComposition@@IEBAJPEAI@Z @ 0x180033894
 * Callers:
 *     ?RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ @ 0x180031010 (-RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ.c)
 *     ?GetD2DCommandList@CPrimitiveGroup@DirectComposition@@IEAAJPEAUID2D1DeviceContext@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1800FA130 (-GetD2DCommandList@CPrimitiveGroup@DirectComposition@@IEAAJPEAUID2D1DeviceContext@@PEAPEAUID2D1P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPrimitiveGroup::GetCommandBufferSize(
        DirectComposition::CPrimitiveGroup *this,
        unsigned int *a2)
{
  unsigned __int64 v4; // r9
  signed int v5; // r8d
  int v6; // ebp
  __int64 v7; // r11
  __int64 v8; // rsi
  unsigned int v10; // ecx
  unsigned int v11; // edx
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // edx
  int v15; // eax

  v4 = 144LL * *((unsigned int *)this + 52);
  if ( v4 > 0xFFFFFFFF )
  {
    return (unsigned int)-2147024362;
  }
  else
  {
    v5 = 0;
    v6 = -1;
    v7 = 0LL;
    while ( (unsigned int)v7 < *((_DWORD *)this + 52) )
    {
      v8 = *((_QWORD *)this + 23);
      if ( v6 != *(_DWORD *)(v8 + 80 * v7 + 40) )
      {
        v6 = *(_DWORD *)(v8 + 80 * v7 + 40);
        v10 = v4 + 144;
        v11 = v4;
        v12 = -1;
        if ( (int)v4 + 144 >= (unsigned int)v4 )
          v12 = v4 + 144;
        LODWORD(v4) = v12;
        v5 = v10 < v11 ? 0x80070216 : 0;
      }
      if ( v5 >= 0 && !*(_BYTE *)(v8 + 80 * v7 + 60) )
      {
        v13 = v4 + 144;
        v14 = v4;
        v15 = -1;
        if ( (int)v4 + 144 >= (unsigned int)v4 )
          v15 = v4 + 144;
        LODWORD(v4) = v15;
        v5 = v13 < v14 ? 0x80070216 : 0;
      }
      v7 = (unsigned int)(v7 + 1);
      if ( v5 < 0 )
        return (unsigned int)v5;
    }
    *a2 = v4;
  }
  return (unsigned int)v5;
}
