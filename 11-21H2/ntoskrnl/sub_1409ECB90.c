/*
 * XREFs of sub_1409ECB90 @ 0x1409ECB90
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 *     sub_1409EC988 @ 0x1409EC988 (sub_1409EC988.c)
 *     sub_1409ECCCC @ 0x1409ECCCC (sub_1409ECCCC.c)
 *     sub_1409ED690 @ 0x1409ED690 (sub_1409ED690.c)
 */

void __fastcall sub_1409ECB90(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  int v3; // edi
  bool v4; // al
  unsigned int v5; // esi
  __int64 i; // rax
  __int64 v7; // rax
  unsigned int *v8; // rbx
  __int64 v9; // rbp
  char v10; // r14

  v3 = (int)Argument1;
  if ( !(_DWORD)Argument1 )
  {
LABEL_8:
    sub_1409ED690(CallbackContext, Argument1, Argument2);
    goto LABEL_9;
  }
  if ( (_DWORD)Argument1 != 1 )
  {
    if ( (_DWORD)Argument1 == 2 )
    {
      sub_1409ED690(CallbackContext, Argument1, Argument2);
      return;
    }
    if ( (_DWORD)Argument1 != 3 )
    {
      if ( (_DWORD)Argument1 != 4 )
        return;
      goto LABEL_9;
    }
    goto LABEL_8;
  }
LABEL_9:
  v4 = !v3 || v3 == 3;
  byte_140D3CA34 = v4;
  v5 = 0;
  for ( i = qword_140D05008; v5 < *(_DWORD *)(qword_140D05008 + 16); ++v5 )
  {
    v7 = sub_140797594(i, v5, 0);
    v8 = (unsigned int *)v7;
    if ( v7 )
    {
      v9 = *(_QWORD *)(v7 + 1088);
      v10 = 0;
      if ( v9 )
      {
        v10 = 1;
        KeWaitForSingleObject((PVOID)(v7 + 632), Executive, 0, 0, 0LL);
        if ( !v3 || v3 == 3 )
        {
          if ( *(_BYTE *)(v9 + 32) )
            sub_1409ECCCC(v8);
        }
        else
        {
          sub_1409EC988((__int64)v8);
        }
      }
      sub_1407981E8(v8, v10);
    }
    i = qword_140D05008;
  }
}
