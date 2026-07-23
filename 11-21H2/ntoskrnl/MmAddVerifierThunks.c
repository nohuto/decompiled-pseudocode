/*
 * XREFs of MmAddVerifierThunks @ 0x14096A0D0
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     sub_1402FDA80 @ 0x1402FDA80 (sub_1402FDA80.c)
 *     sub_1406F5AF0 @ 0x1406F5AF0 (sub_1406F5AF0.c)
 *     sub_1406F5B50 @ 0x1406F5B50 (sub_1406F5B50.c)
 *     sub_140A932F4 @ 0x140A932F4 (sub_140A932F4.c)
 */

NTSTATUS __stdcall MmAddVerifierThunks(PVOID ThunkBuffer, ULONG ThunkBufferSize)
{
  int v5; // edi
  ULONG v6; // ebx
  unsigned __int64 *v7; // rsi
  struct _KTHREAD *v8; // r15
  PVOID *v9; // rax
  PVOID *v10; // r8
  PVOID v11; // r10
  int v12; // edx
  PVOID *v13; // rcx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rax
  NTSTATUS v16; // ebx

  if ( (dword_140D06880 & 1) == 0 )
    return -1073741637;
  v5 = 0;
  v6 = ThunkBufferSize >> 4;
  v7 = (unsigned __int64 *)ThunkBuffer;
  if ( !(ThunkBufferSize >> 4) )
    return -1073741585;
  dword_140C1AA74 += v6;
  v8 = sub_1406F5B50();
  v9 = (PVOID *)sub_1402FDA80(*(_QWORD *)ThunkBuffer, 0);
  v10 = v9;
  if ( v9 )
  {
    v11 = v9[6];
    v12 = 0;
    v13 = (PVOID *)PsLoadedModuleList;
    v14 = (unsigned __int64)v11 + *((unsigned int *)v9 + 16);
    while ( 1 )
    {
      if ( v13 == &PsLoadedModuleList )
        goto LABEL_11;
      if ( v9 == v13 )
        break;
      if ( (unsigned int)++v12 >= 2 )
      {
LABEL_11:
        while ( *v7 >= (unsigned __int64)v11 )
        {
          if ( *v7 >= v14 )
            break;
          v15 = v7[1];
          if ( v15 < (unsigned __int64)v11 || v15 >= v14 )
            break;
          v7 += 2;
          if ( ++v5 >= v6 )
          {
            v16 = sub_140A932F4(ThunkBuffer, ThunkBufferSize, v10, v14);
            goto LABEL_18;
          }
        }
        break;
      }
      v13 = (PVOID *)*v13;
    }
  }
  v16 = -1073741584;
LABEL_18:
  sub_1406F5AF0((__int64)v8);
  return v16;
}
