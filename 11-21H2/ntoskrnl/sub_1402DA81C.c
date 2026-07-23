/*
 * XREFs of sub_1402DA81C @ 0x1402DA81C
 * Callers:
 *     sub_1402DA0F0 @ 0x1402DA0F0 (sub_1402DA0F0.c)
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 *     sub_140578BB4 @ 0x140578BB4 (sub_140578BB4.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     HalSendNMI @ 0x1402DA8E0 (HalSendNMI.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 */

__int64 __fastcall sub_1402DA81C(__int64 a1, char a2)
{
  __int64 result; // rax
  int v5; // edi
  __int64 v6; // rcx
  signed __int32 v7; // eax
  unsigned __int16 *v8[2]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v9; // [rsp+30h] [rbp-28h]
  int v10; // [rsp+32h] [rbp-26h]
  __int16 v11; // [rsp+36h] [rbp-22h]
  unsigned int v12; // [rsp+70h] [rbp+18h] BYREF

  v10 = 0;
  v11 = 0;
  v12 = 0;
  result = (unsigned int)_InterlockedIncrement(&dword_140C2AD78);
  if ( (int)result > 1 )
    return result;
  v8[1] = *(unsigned __int16 **)(a1 + 8);
  v5 = 0;
  v9 = 0;
  v8[0] = (unsigned __int16 *)a1;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v12, v8);
    if ( (_DWORD)result )
      break;
    v6 = qword_140D088C0[v12];
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 11656), 5, 0);
    if ( a2 )
    {
      if ( v7 )
      {
        do
        {
          do
            _mm_pause();
          while ( *(_DWORD *)(v6 + 11656) );
        }
        while ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 11656), 5, 0) );
      }
LABEL_6:
      ++v5;
    }
    else
    {
      if ( !v7 )
        goto LABEL_6;
      KeRemoveProcessorAffinityEx(a1, v12);
    }
  }
  if ( v5 )
    return HalSendNMI(a1);
  return result;
}
