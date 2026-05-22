/*
 * XREFs of ?SetNotificationId@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@AEAAX_K0@Z @ 0x18018753C
 * Callers:
 *     ?SetNotificationId@Partner@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAAJ_K0@Z @ 0x1801875E0 (-SetNotificationId@Partner@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@U.c)
 * Callees:
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 */

void __fastcall Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner::SetNotificationId(
        Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner *this,
        __int64 a2,
        __int64 a3)
{
  int *v3; // rdi
  __int64 v6; // rcx
  int v7; // edx
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = a3;
  v8 = a2;
  v3 = (int *)((char *)this + 128);
  if ( *((_QWORD *)this + 31) != a2 )
  {
    *((_QWORD *)this + 31) = a2;
    DirectComposition::CDevice::ResourceSetBufferProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *v3,
      2,
      &v8,
      8uLL);
  }
  if ( *((_QWORD *)this + 32) != a3 )
  {
    v6 = *((_QWORD *)this + 3);
    v7 = *v3;
    *((_QWORD *)this + 32) = a3;
    DirectComposition::CDevice::ResourceSetBufferProperty(*(DirectComposition::CDevice **)(v6 + 456), v7, 3, &v9, 8uLL);
  }
}
