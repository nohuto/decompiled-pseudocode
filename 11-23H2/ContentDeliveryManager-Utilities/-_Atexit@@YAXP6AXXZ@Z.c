/*
 * XREFs of ?_Atexit@@YAXP6AXXZ@Z @ 0x18000CC24
 * Callers:
 *     ?_Setgloballocale@locale@std@@CAXPEAX@Z @ 0x180005800 (-_Setgloballocale@locale@std@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall _Atexit(void (*a1)(void))
{
  PVOID v1; // rax

  if ( !qword_180195268 )
    abort();
  v1 = EncodePointer(a1);
  qword_180195530[--qword_180195268] = v1;
}
