/*
 * XREFs of PoFxUnregisterDevice @ 0x140864C90
 * Callers:
 *     sub_140619F90 @ 0x140619F90 (sub_140619F90.c)
 * Callees:
 *     sub_1403DCAD0 @ 0x1403DCAD0 (sub_1403DCAD0.c)
 *     sub_14080D7EC @ 0x14080D7EC (sub_14080D7EC.c)
 *     sub_14082310C @ 0x14082310C (sub_14082310C.c)
 */

__int64 __fastcall PoFxUnregisterDevice(ULONG_PTR a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 48);
  if ( v1 )
    sub_14080D7EC(*(struct _KEVENT **)(a1 + 48));
  else
    sub_14082310C(a1);
  return sub_1403DCAD0(v1, a1);
}
