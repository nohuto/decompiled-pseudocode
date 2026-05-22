/*
 * XREFs of ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18007C16C
 * Callers:
 *     ?RemoveAllVisuals@CompositionLight@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@234@@Z @ 0x180001950 (-RemoveAllVisuals@CompositionLight@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImp.c)
 *     ?RemoveAllVisuals@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@345@@Z @ 0x1800019E0 (-RemoveAllVisuals@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollection.c)
 *     ??1CSurfaceFactory@DirectComposition@@MEAA@XZ @ 0x18001B2E4 (--1CSurfaceFactory@DirectComposition@@MEAA@XZ.c)
 *     ?ExecuteGutterExtensions@CAtlasSurfacePool@DirectComposition@@QEAAJXZ @ 0x180022D9C (-ExecuteGutterExtensions@CAtlasSurfacePool@DirectComposition@@QEAAJXZ.c)
 *     ?Destroy@CompositionPropertySet@Composition@UI@Windows@@UEAAXXZ @ 0x180028180 (-Destroy@CompositionPropertySet@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?ReleaseAllResources@CPrimitiveGroup@DirectComposition@@IEAAXXZ @ 0x18003BE34 (-ReleaseAllResources@CPrimitiveGroup@DirectComposition@@IEAAXXZ.c)
 *     ??1CDevice@DirectComposition@@QEAA@XZ @ 0x18005E2D8 (--1CDevice@DirectComposition@@QEAA@XZ.c)
 *     ??1CAtlasSurfacePool@DirectComposition@@EEAA@XZ @ 0x18005E68C (--1CAtlasSurfacePool@DirectComposition@@EEAA@XZ.c)
 *     ?Uninitialize@CDxDevice@DirectComposition@@IEAAXXZ @ 0x18009BE60 (-Uninitialize@CDxDevice@DirectComposition@@IEAAXXZ.c)
 *     ?ResetTimeEvents@CAnimationInstance@DirectComposition@@UEAAJXZ @ 0x1800E9110 (-ResetTimeEvents@CAnimationInstance@DirectComposition@@UEAAJXZ.c)
 *     ?LogTelemetryLocked@CTelemetryHelper@@AEAAXXZ @ 0x1800FCD20 (-LogTelemetryLocked@CTelemetryHelper@@AEAAXXZ.c)
 *     ?RemoveAll@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@QEAAJXZ @ 0x18019030C (-RemoveAll@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@QEAAJXZ.c)
 * Callees:
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x180078A40 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800A812C (memcpy_0.c)
 */

void __fastcall DynArrayImpl<0>::ShrinkToSize(__int64 a1, unsigned int a2)
{
  void *v3; // rcx
  unsigned __int64 v4; // r8
  void *v5; // rdi
  HANDLE ProcessHeap; // rax
  int v7; // eax
  LPVOID v8; // rax

  v3 = *(void **)(a1 + 8);
  if ( *(void **)a1 != v3 )
  {
    v4 = a2 * (unsigned __int64)*(unsigned int *)(a1 + 24);
    if ( v4 <= 0xFFFFFFFF )
    {
      if ( *(_DWORD *)(a1 + 24) <= *(_DWORD *)(a1 + 16) )
      {
        memcpy_0(v3, *(const void **)a1, (unsigned int)v4);
        v5 = *(void **)a1;
        if ( *(_QWORD *)a1 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v5);
        }
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
        v7 = *(_DWORD *)(a1 + 16);
        goto LABEL_7;
      }
      v8 = DefaultHeap::Realloc(*(void **)a1, (unsigned int)v4);
      if ( v8 )
      {
        *(_QWORD *)a1 = v8;
        v7 = *(_DWORD *)(a1 + 24);
LABEL_7:
        *(_DWORD *)(a1 + 20) = v7;
      }
    }
  }
}
