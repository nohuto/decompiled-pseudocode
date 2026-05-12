/*
 * XREFs of sub_1C0074CA8 @ 0x1C0074CA8
 * Callers:
 *     sub_1C0004DF0 @ 0x1C0004DF0 (sub_1C0004DF0.c)
 * Callees:
 *     sub_1C0004BDC @ 0x1C0004BDC (sub_1C0004BDC.c)
 *     sub_1C0004C64 @ 0x1C0004C64 (sub_1C0004C64.c)
 *     sub_1C0008424 @ 0x1C0008424 (sub_1C0008424.c)
 *     sub_1C0008BF0 @ 0x1C0008BF0 (sub_1C0008BF0.c)
 *     sub_1C0008DB8 @ 0x1C0008DB8 (sub_1C0008DB8.c)
 *     sub_1C0008E14 @ 0x1C0008E14 (sub_1C0008E14.c)
 *     sub_1C0036C8C @ 0x1C0036C8C (sub_1C0036C8C.c)
 */

__int64 __fastcall sub_1C0074CA8(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbx
  unsigned int v8; // ebx
  KIRQL v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r12
  __int64 v16; // rcx
  __int64 v17; // rax
  char v18; // al
  __int64 v19; // rax
  __int64 v20; // r8
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+50h] [rbp+8h] BYREF

  ProcNumber = 0;
  v3 = *(_QWORD *)(a2 + 184);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)(v3 + 8);
  *(_BYTE *)(v3 + 3) |= 1u;
  *(_BYTE *)(v6 + 3) = 0;
  v7 = v6 + *(unsigned int *)(v6 + 120);
  *(_QWORD *)(*(_QWORD *)(a2 + 184) + 24LL) = 0LL;
  if ( *(_BYTE *)(v6 + 2) == 40 )
  {
    if ( byte_1C0093AE4
      && *(_BYTE *)(v7 + 72) == 1
      && (unsigned int)(unsigned __int8)*(_DWORD *)(v7 + 8) - 129 <= 1
      && *(_BYTE *)(v7 + 51) == 0xEE )
    {
      return (unsigned int)-1073741637;
    }
    else
    {
      v9 = KfRaiseIrql(2u);
      KeGetCurrentProcessorNumberEx(&ProcNumber);
      *(struct _PROCESSOR_NUMBER *)(v6 + 96) = ProcNumber;
      v11 = *(_QWORD *)(a2 + 184);
      *(_BYTE *)(a2 + 141) = -88;
      *(_QWORD *)(v11 + 8) = v6;
      if ( *(_BYTE *)(v7 + 72) == 1 )
        v12 = sub_1C0008424(((*(_DWORD *)(v5 + 484) + 7) & 0xFFFFFFF8) + 1104, v10, v5);
      else
        v12 = (__int64)sub_1C0004BDC(*(_QWORD *)(a1 + 664) + 64LL);
      if ( v12 )
      {
        v14 = v12 + 48;
        v15 = v12 + 1104;
        sub_1C0004C64(v12 + 48, v13, *(_DWORD *)(v12 + 792), *(void **)(v12 + 808));
        if ( *(_BYTE *)(v6 + 2) == 40 )
          v16 = *(_QWORD *)(v6 + 104);
        else
          v16 = *(_QWORD *)(v6 + 40);
        *(_QWORD *)(v14 + 160) = a2;
        *(_QWORD *)(v14 + 168) = v6;
        *(_QWORD *)(v14 + 224) = a1;
        v17 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)(v14 + 136) = 0LL;
        *(_QWORD *)(v14 + 104) = v17;
        *(_QWORD *)(v14 + 768) = v16;
        if ( (*(_BYTE *)(v5 + 4596) & 1) != 0 )
        {
          *(_DWORD *)(v14 + 18) = *(_DWORD *)(v6 + 96);
        }
        else
        {
          *(_BYTE *)(v14 + 20) = -1;
          *(_WORD *)(v14 + 18) = -1;
        }
        v18 = *(_BYTE *)(v14 + 16);
        *(_DWORD *)(v14 + 24) = 0;
        *(_BYTE *)(v14 + 16) = v18 & 0xE3 | 4;
        *(_QWORD *)(v14 + 176) = *(_QWORD *)(v6 + 80);
        v19 = *(_QWORD *)(v6 + 64);
        *(_QWORD *)(v14 + 192) = 0LL;
        *(_QWORD *)(v14 + 184) = v19;
        *(_QWORD *)(v6 + 96) = v14;
        *(_QWORD *)(v6 + 104) = v15;
        sub_1C0036C8C(v5, a2);
        *(_QWORD *)(v14 + 656) = sub_1C0074EE0;
        if ( *(_QWORD *)(v5 + 4896) )
          sub_1C0008BF0(v5, 0LL, 1LL);
        if ( *(_BYTE *)(v5 + 4306) )
          sub_1C0008DB8(v5, v14);
        else
          sub_1C0008E14(v5, (_QWORD *)v14, v20);
        v8 = 259;
      }
      else
      {
        v8 = -1073741823;
      }
      KeLowerIrql(v9);
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v8;
}
