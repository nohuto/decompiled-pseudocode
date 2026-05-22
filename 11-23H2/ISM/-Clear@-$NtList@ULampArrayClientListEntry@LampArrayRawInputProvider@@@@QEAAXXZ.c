/*
 * XREFs of ?Clear@?$NtList@ULampArrayClientListEntry@LampArrayRawInputProvider@@@@QEAAXXZ @ 0x1800E8FF4
 * Callers:
 *     ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x1800E8D6C (--1LampArrayRawInputProvider@@EEAA@XZ.c)
 *     ?Shutdown@LampArrayRawInputProvider@@AEAAXXZ @ 0x1800E9838 (-Shutdown@LampArrayRawInputProvider@@AEAAXXZ.c)
 * Callees:
 *     ??_GLampArrayClientListEntry@LampArrayRawInputProvider@@QEAAPEAXI@Z @ 0x1800E8E98 (--_GLampArrayClientListEntry@LampArrayRawInputProvider@@QEAAPEAXI@Z.c)
 */

LampArrayRawInputProvider::LampArrayClientListEntry *__fastcall NtList<LampArrayRawInputProvider::LampArrayClientListEntry>::Clear(
        LampArrayRawInputProvider::LampArrayClientListEntry **a1)
{
  LampArrayRawInputProvider::LampArrayClientListEntry *v2; // rcx
  LampArrayRawInputProvider::LampArrayClientListEntry *result; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *((LampArrayRawInputProvider::LampArrayClientListEntry ***)*a1 + 1) != a1
      || (result = *(LampArrayRawInputProvider::LampArrayClientListEntry **)v2,
          *(LampArrayRawInputProvider::LampArrayClientListEntry **)(*(_QWORD *)v2 + 8LL) != v2) )
    {
      __fastfail(3u);
    }
    *a1 = result;
    *((_QWORD *)result + 1) = a1;
    if ( v2 == (LampArrayRawInputProvider::LampArrayClientListEntry *)a1 )
      break;
    LampArrayRawInputProvider::LampArrayClientListEntry::`scalar deleting destructor'(v2);
    a1[2] = (LampArrayRawInputProvider::LampArrayClientListEntry *)((char *)a1[2] - 1);
  }
  return result;
}
