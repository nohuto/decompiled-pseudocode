/*
 * XREFs of sub_1403000B0 @ 0x1403000B0
 * Callers:
 *     sub_1402FFB70 @ 0x1402FFB70 (sub_1402FFB70.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_1403457BC @ 0x1403457BC (sub_1403457BC.c)
 */

_UNKNOWN **__fastcall sub_1403000B0(__int64 a1)
{
  _UNKNOWN **result; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v4; // rdx
  unsigned __int16 *v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+32h] [rbp-16h]
  __int16 v8; // [rsp+36h] [rbp-12h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  int v10; // [rsp+58h] [rbp+10h] BYREF

  result = &retaddr;
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = 0;
  v8 = 0;
  v10 = 0;
  if ( *((_QWORD *)CurrentPrcb + 4375) )
  {
    result = (_UNKNOWN **)KeIsEmptyAffinityEx((_WORD *)a1);
    if ( !(_DWORD)result )
    {
      v5[1] = *(unsigned __int16 **)(a1 + 8);
      v6 = 0;
      v5[0] = (unsigned __int16 *)a1;
      while ( 1 )
      {
        result = (_UNKNOWN **)KeEnumerateNextProcessor(&v10, v5);
        if ( (_DWORD)result )
          break;
        v4 = qword_140D088C0[v10];
        if ( (struct _KPRCB *)v4 != CurrentPrcb )
          sub_1403457BC(CurrentPrcb, v4, (unsigned int)dword_140D0504C);
      }
    }
  }
  return result;
}
