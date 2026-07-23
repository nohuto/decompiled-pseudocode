/*
 * XREFs of sub_14038B488 @ 0x14038B488
 * Callers:
 *     sub_1407FE1F4 @ 0x1407FE1F4 (sub_1407FE1F4.c)
 *     sub_1408052DC @ 0x1408052DC (sub_1408052DC.c)
 * Callees:
 *     sub_140A53260 @ 0x140A53260 (sub_140A53260.c)
 */

unsigned __int64 __fastcall sub_14038B488(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, __int64 a5, _DWORD *a6)
{
  unsigned __int64 result; // rax
  unsigned __int64 v11; // r11
  _DWORD *v12; // r10

  result = (unsigned __int64)KeGetCurrentPrcb();
  v11 = 1000LL * *(unsigned int *)(result + 68);
  if ( a1 )
  {
    result = sub_140A53260(&qword_140C22CA8, &qword_140C22CB0);
    *a1 = result;
  }
  if ( a2 )
  {
    result = sub_140A53260(&qword_140C22CC8, &qword_140C22CD0);
    *a2 = result;
  }
  if ( a5 )
  {
    a5 = 0LL;
    result = sub_140A53260(&a5, &qword_140C22CE8);
    *v12 = result;
    if ( dword_140C22EF0 )
    {
      result = (unsigned int)(qword_140C22D68 + result);
      *v12 = result;
    }
  }
  if ( a3 )
  {
    result = qword_140C22D30 / v11;
    *a3 = qword_140C22D30 / v11;
  }
  if ( a4 )
  {
    result = (qword_140C22E68 + qword_140C22DA0) / v11;
    *a4 = result;
  }
  if ( a6 )
  {
    result = qword_140C22D10 / v11;
    *a6 = qword_140C22D10 / v11;
  }
  return result;
}
