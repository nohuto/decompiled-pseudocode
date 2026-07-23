/*
 * XREFs of sub_140567630 @ 0x140567630
 * Callers:
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 * Callees:
 *     sub_14028FBF0 @ 0x14028FBF0 (sub_14028FBF0.c)
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     sub_1403D7FD4 @ 0x1403D7FD4 (sub_1403D7FD4.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     sub_1403EBAC8 @ 0x1403EBAC8 (sub_1403EBAC8.c)
 *     sub_140552B40 @ 0x140552B40 (sub_140552B40.c)
 *     sub_140567DA0 @ 0x140567DA0 (sub_140567DA0.c)
 *     sub_1405680F4 @ 0x1405680F4 (sub_1405680F4.c)
 *     sub_1405C6658 @ 0x1405C6658 (sub_1405C6658.c)
 */

char __fastcall sub_140567630(int a1, char a2)
{
  char result; // al
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned int v10; // ebx

  if ( !a2 )
  {
    sub_140552B40(2);
    sub_140567DA0();
    sub_140552B40(5);
    sub_1405680F4();
  }
  result = sub_1403D99B4((ULONG)&dword_140C54EF0, (PVOID)0x60);
  switch ( a1 )
  {
    case 265:
      result = sub_1403EBAC8(qword_140C2BD88, qword_140C2BD90, qword_140C2BD98, qword_140C2BDA0);
      if ( qword_140C2BDA0 == 47 )
      {
        v4 = qword_140C2BD98;
        result = sub_14028FBF0(qword_140C2BD98 + 1928);
        if ( result )
        {
          v5 = *(_QWORD *)(v4 + 1928);
          v6 = 4096LL;
LABEL_13:
          result = sub_1403D99B4(v5, (PVOID)v6);
        }
      }
      break;
    case 395:
      if ( qword_140C2BD88 == 396 )
      {
        if ( dword_140C33EA0 )
          sub_1403D99B4((ULONG)&dword_140C33EA0, (PVOID)4);
        result = sub_1403D99B4((ULONG)&qword_140D0DBD0, (PVOID)0xA08);
        if ( qword_140D06BC8 )
        {
          sub_1403D99B4((ULONG)&qword_140D06BC8, (PVOID)8);
          LODWORD(v5) = qword_140D06BC8;
          v6 = 327688LL;
          goto LABEL_13;
        }
      }
      break;
    case 239:
      sub_1405C6658(0LL, 0LL, 0LL);
      if ( xmmword_140C15CA0 )
      {
        sub_1403D99B4((ULONG)&xmmword_140C15CA0, (PVOID)0x30);
        if ( (_WORD)xmmword_140C15CB0 )
          sub_1403D99B4(DWORD2(xmmword_140C15CB0), (PVOID)(unsigned __int16)xmmword_140C15CB0);
      }
      result = sub_1402D6B0C((__int64)&unk_140D01148, 0x1B8424Bu, 0, 0, (__int64)&qword_14003ABC8, 0);
      break;
  }
  if ( (_BYTE)byte_140E01841 )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = *((_QWORD *)CurrentThread + 131) - 4096LL;
    v9 = (*((_QWORD *)CurrentThread + 132) & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( v8 - v9 >= 0x1000 )
      v10 = 4096;
    else
      v10 = v8 - v9;
    if ( sub_1403D7FD4(v9, v10) )
      sub_1403D99B4(v9, (PVOID)v10);
    sub_1403D99B4((ULONG)&byte_140E01841, (PVOID)1);
    sub_1403D99B4((ULONG)&byte_140E01843, (PVOID)1);
    sub_1403D99B4((ULONG)&byte_140E01842, (PVOID)1);
    return sub_1403D99B4((ULONG)&byte_140D07050, (PVOID)0x1C);
  }
  return result;
}
