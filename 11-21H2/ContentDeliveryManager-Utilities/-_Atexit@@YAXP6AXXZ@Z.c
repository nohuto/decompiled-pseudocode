/*
 * XREFs of ?_Atexit@@YAXP6AXXZ@Z @ 0x18000C530
 * Callers:
 *     ?_Setgloballocale@locale@std@@CAXPEAX@Z @ 0x180005170 (-_Setgloballocale@locale@std@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall _Atexit(void (*a1)(void))
{
  PVOID v1; // rax

  if ( !qword_1801AE198 )
    abort();
  v1 = EncodePointer(a1);
  qword_1801AE4F0[--qword_1801AE198] = v1;
}
