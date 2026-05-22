/*
 * XREFs of ?GetLastPoolAccessed@CDynamicPoolSet@DirectComposition@@QEBAPEAVCDynamicPool@2@W4DXGI_FORMAT@@_N1@Z @ 0x180083FDC
 * Callers:
 *     ?ComputeAtlasSize@CSurfaceManager@DirectComposition@@AEAAXAEBUSurfaceRequestStruct@2@W4DXGI_FORMAT@@_NPEAVSizeU@2@@Z @ 0x180083E28 (-ComputeAtlasSize@CSurfaceManager@DirectComposition@@AEAAXAEBUSurfaceRequestStruct@2@W4DXGI_FORM.c)
 * Callees:
 *     <none>
 */

struct DirectComposition::CDynamicPool *__fastcall DirectComposition::CDynamicPoolSet::GetLastPoolAccessed(
        DirectComposition::CDynamicPoolSet *this,
        enum DXGI_FORMAT a2,
        char a3,
        char a4)
{
  struct DirectComposition::CDynamicPool *result; // rax
  __int64 v7; // r10
  DirectComposition::CDynamicPoolSet *i; // rax
  char *v9; // rdx
  __int64 v10; // r8

  result = (struct DirectComposition::CDynamicPool *)*((_QWORD *)this + 6);
  if ( !result
    || (v7 = *((_QWORD *)result + 4), *(_DWORD *)(v7 + 160) != a2)
    || ((*(_BYTE *)(v7 + 172) & 4) != 0) != a3
    || a4 != (*(_QWORD *)(v7 + 200) != 0LL) )
  {
    for ( i = (DirectComposition::CDynamicPoolSet *)*((_QWORD *)this + 5);
          ;
          i = (DirectComposition::CDynamicPoolSet *)*((_QWORD *)v9 + 3) )
    {
      v9 = (char *)i - 16;
      if ( i == (DirectComposition::CDynamicPoolSet *)((char *)this + 32) )
        v9 = 0LL;
      if ( !v9 )
        return 0LL;
      v10 = *((_QWORD *)v9 + 4);
      if ( *(_DWORD *)(v10 + 160) == a2
        && ((*(_BYTE *)(v10 + 172) & 4) != 0) == a3
        && a4 == (*(_QWORD *)(v10 + 200) != 0LL) )
      {
        break;
      }
    }
    return (struct DirectComposition::CDynamicPool *)v9;
  }
  return result;
}
