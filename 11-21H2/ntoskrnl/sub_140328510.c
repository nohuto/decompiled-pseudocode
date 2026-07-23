/*
 * XREFs of sub_140328510 @ 0x140328510
 * Callers:
 *     CcPrepareMdlWrite @ 0x140253190 (CcPrepareMdlWrite.c)
 *     sub_14032AD00 @ 0x14032AD00 (sub_14032AD00.c)
 *     CcMapData @ 0x1407BDE60 (CcMapData.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_140328690 @ 0x140328690 (sub_140328690.c)
 */

__int64 __fastcall sub_140328510(unsigned int a1, int a2, char a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rdi
  unsigned int v8; // r8d
  __int16 v9; // cx
  unsigned __int8 v10; // bp
  int v11; // r9d
  int v12; // r11d
  NTSTATUS v13; // r10d
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rdi
  unsigned int v16; // ebx
  int v17; // r14d
  int v18; // eax
  int v20; // eax
  int v21; // [rsp+60h] [rbp+8h]
  int v22; // [rsp+68h] [rbp+10h]
  char v23; // [rsp+70h] [rbp+18h] BYREF

  v22 = a2;
  CurrentThread = KeGetCurrentThread();
  v6 = a1;
  v8 = 0;
  v9 = a4;
  v10 = 0;
  v11 = 2;
  v12 = 1;
  v23 = 1;
  v13 = 0;
  if ( a3 )
    v11 = 0;
  v21 = v11;
  v14 = a4 & 0xFFFFFFFFFFFFF000uLL;
  v15 = ((unsigned __int64)(v9 & 0xFFF) + v6 + 4095) >> 12;
  v16 = *((unsigned __int8 *)CurrentThread + 1388) + 2 * *((_DWORD *)CurrentThread + 342);
  if ( (_DWORD)v15 )
  {
    while ( 1 )
    {
      *((_BYTE *)CurrentThread + 1388) = 1;
      if ( (unsigned int)(v15 - 1) > *((_DWORD *)CurrentThread + 342) )
      {
        v20 = v15 - 1;
        if ( (unsigned int)(v15 - 1) > 0xF )
          v20 = 15;
        *((_DWORD *)CurrentThread + 342) = v20;
      }
      if ( a2 )
      {
        v17 = 1;
        if ( v12 == 2 )
          v17 = v15 - 1;
      }
      else
      {
        v17 = v15;
      }
      LOBYTE(v8) = (v12 & a2) != 0;
      v18 = sub_140328690(v14, (unsigned int)(v17 << 12), v11 | v8, &v23);
      v13 = v18;
      if ( !v23 && !a3 )
        break;
      if ( v18 < 0 )
        goto LABEL_13;
      v14 += (unsigned int)(v17 << 12);
      LODWORD(v15) = v15 - v17;
      v12 = 4;
      if ( (_DWORD)v15 != 1 )
        v12 = 2;
      if ( !(_DWORD)v15 )
        goto LABEL_12;
      a2 = v22;
      v8 = 0;
      v11 = v21;
    }
    *((_DWORD *)CurrentThread + 342) = v16 >> 1;
    *((_BYTE *)CurrentThread + 1388) = v16 & 1;
  }
  else
  {
LABEL_12:
    v10 = 1;
LABEL_13:
    *((_DWORD *)CurrentThread + 342) = v16 >> 1;
    *((_BYTE *)CurrentThread + 1388) = v16 & 1;
    if ( a3 && v13 < 0 )
      RtlRaiseStatus(v13);
  }
  return v10;
}
