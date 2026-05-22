/*
 * XREFs of ??1CVirtualSurfacePrimitive@DirectComposition@@EEAA@XZ @ 0x18003ABE4
 * Callers:
 *     ??_GCVirtualSurfacePrimitive@DirectComposition@@EEAAPEAXI@Z @ 0x18003ABA0 (--_GCVirtualSurfacePrimitive@DirectComposition@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCVirtualSurface@DirectComposition@@@@YAXAEAPEAVCVirtualSurface@DirectComposition@@@Z @ 0x18003A9A4 (--$ReleaseInterface@VCVirtualSurface@DirectComposition@@@@YAXAEAPEAVCVirtualSurface@DirectCompos.c)
 *     ?FreeRealization@CVirtualSurfacePrimitive@DirectComposition@@AEAAXXZ @ 0x18003B75C (-FreeRealization@CVirtualSurfacePrimitive@DirectComposition@@AEAAXXZ.c)
 */

void __fastcall DirectComposition::CVirtualSurfacePrimitive::~CVirtualSurfacePrimitive(
        DirectComposition::CVirtualSurfacePrimitive *this)
{
  char *v2; // rsi
  unsigned int v3; // ebx
  char *v4; // r9
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned int v8; // edx
  __int64 v9; // r10
  unsigned int v10; // ecx
  __int64 v11; // r9
  __int64 v12; // rcx

  *(_QWORD *)this = &DirectComposition::CVirtualSurfacePrimitive::`vftable'{for `CMILCOMBaseT<IDCompositionPrimitivePartner>'};
  v2 = (char *)this + 16;
  *((_QWORD *)this + 2) = &DirectComposition::CVirtualSurfacePrimitive::`vftable'{for `DirectComposition::CDirtyListener'};
  DirectComposition::CVirtualSurfacePrimitive::FreeRealization(this);
  v3 = 0;
  v4 = (char *)this + 256;
  if ( *((_BYTE *)this + 272) )
  {
    *(_QWORD *)v4 = 0LL;
  }
  else
  {
    v6 = *(_QWORD *)v4;
    v7 = 0LL;
    v8 = *(_DWORD *)(*(_QWORD *)v4 + 48LL);
    v9 = *(_QWORD *)(*(_QWORD *)v4 + 24LL);
    if ( v8 )
    {
      do
      {
        if ( v2 == *(char **)(v9 + 8 * v7) )
          break;
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < v8 );
    }
    if ( (unsigned int)v7 < v8 )
    {
      while ( (unsigned int)v7 < v8 - 1 )
      {
        *(_QWORD *)(v9 + 8 * v7) = *(_QWORD *)(v9 + 8LL * (unsigned int)(v7 + 1));
        v7 = (unsigned int)(v7 + 1);
        v8 = *(_DWORD *)(v6 + 48);
      }
      *(_DWORD *)(v6 + 48) = v8 - 1;
    }
    ReleaseInterface<DirectComposition::CVirtualSurface>((volatile signed __int32 **)this + 32);
  }
  v5 = *((_QWORD *)this + 13);
  if ( v5 )
  {
    v10 = *(_DWORD *)(v5 + 88);
    v11 = *(_QWORD *)(v5 + 64);
    if ( v10 )
    {
      do
      {
        if ( v2 == *(char **)(v11 + 8LL * v3) )
          break;
        ++v3;
      }
      while ( v3 < v10 );
    }
    if ( v3 < v10 )
    {
      for ( ; v3 < v10 - 1; v10 = *(_DWORD *)(v5 + 88) )
      {
        v12 = v3++;
        *(_QWORD *)(v11 + 8 * v12) = *(_QWORD *)(v11 + 8LL * v3);
      }
      *(_DWORD *)(v5 + 88) = v10 - 1;
    }
  }
  DirectComposition::CPrimitive::~CPrimitive(this);
}
