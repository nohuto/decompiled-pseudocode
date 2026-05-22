/*
 * XREFs of ?RemoveTrackerBindings@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@QEAAXPEAVInteractionTracker@2345@@Z @ 0x180187B08
 * Callers:
 *     ?Destroy@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAXXZ @ 0x180138B90 (-Destroy@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ??$_Move_unchecked@PEAUInteractionTrackerBindingInfoListItem@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@PEAU123456@@std@@YAPEAUInteractionTrackerBindingInfoListItem@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@PEAU123456@00@Z @ 0x180187A74 (--$_Move_unchecked@PEAUInteractionTrackerBindingInfoListItem@InteractionTrackerBindingManager@In.c)
 */

void __fastcall Windows::UI::Composition::Interactions::InteractionTrackerBindingManager::RemoveTrackerBindings(
        Windows::UI::Composition::Interactions::InteractionTrackerBindingManager *this,
        struct Windows::UI::Composition::Interactions::InteractionTracker *a2)
{
  int v2; // edi
  _DWORD *v4; // rbp
  _DWORD *i; // rbx
  __int64 v6; // rcx
  _DWORD *j; // r8
  _DWORD *k; // rdx

  v2 = *((_DWORD *)a2 + 32);
  v4 = (_DWORD *)*((_QWORD *)this + 18);
  for ( i = (_DWORD *)*((_QWORD *)this + 17); i != v4; i += 3 )
  {
    if ( v2 == *i || v2 == i[1] )
    {
      i[2] = 0;
      DirectComposition::CDevice::ResourceSetBufferProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
        *((_DWORD *)this + 32),
        0,
        i,
        0xCuLL);
    }
  }
  v6 = *((_QWORD *)this + 18);
  for ( j = (_DWORD *)*((_QWORD *)this + 17); j != (_DWORD *)v6 && v2 != *j && v2 != j[1]; j += 3 )
    ;
  if ( j != (_DWORD *)v6 )
  {
    for ( k = j + 3; k != (_DWORD *)v6; k += 3 )
    {
      if ( v2 != *k && v2 != k[1] )
      {
        *(_QWORD *)j = *(_QWORD *)k;
        j[2] = k[2];
        j += 3;
      }
    }
    if ( j != (_DWORD *)v6 )
      *((_QWORD *)this + 18) = std::_Move_unchecked<Windows::UI::Composition::Interactions::InteractionTrackerBindingManager::InteractionTrackerBindingInfoListItem *,Windows::UI::Composition::Interactions::InteractionTrackerBindingManager::InteractionTrackerBindingInfoListItem *>(
                                 v6,
                                 *((_QWORD *)this + 18),
                                 (__int64)j);
  }
}
