/*
 * XREFs of sub_14098EB00 @ 0x14098EB00
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_14098EAC0 @ 0x14098EAC0 (sub_14098EAC0.c)
 */

__int64 __fastcall sub_14098EB00(PPROCESSOR_NUMBER ProcNumber, _DWORD *a2)
{
  unsigned int v2; // ebx
  ULONG ProcessorIndexFromNumber; // eax
  unsigned __int16 *v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+32h] [rbp-16h]
  __int16 v10; // [rsp+36h] [rbp-12h]
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
  a2[1] = 0;
  if ( ProcNumber )
  {
    if ( ProcNumber->Reserved
      || (ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber), ProcessorIndexFromNumber == -1) )
    {
      v2 = -1073741811;
    }
    else
    {
      sub_14098EAC0(ProcessorIndexFromNumber, a2);
    }
  }
  else
  {
    v7[1] = (unsigned __int16 *)qword_140C0B8E8[0];
    v7[0] = (unsigned __int16 *)word_140C0B8E0;
    v8 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v11, v7) )
      sub_14098EAC0(v11, a2);
  }
  sub_140224C00(&qword_140C22FE0);
  return v2;
}
