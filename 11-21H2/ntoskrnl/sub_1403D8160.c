/*
 * XREFs of sub_1403D8160 @ 0x1403D8160
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2E60 @ 0x1403A2E60 (sub_1403A2E60.c)
 *     longjmp @ 0x1403DF970 (longjmp.c)
 */

_WORD *__fastcall sub_1403D8160(__int64 a1)
{
  unsigned __int64 v1; // r10
  int v2; // eax
  unsigned __int16 *v3; // r11
  unsigned int v4; // r8d
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r11
  unsigned __int64 v10; // [rsp+30h] [rbp+8h]

  v1 = *(unsigned int *)(a1 + 108);
  if ( !(_DWORD)v1 )
    longjmp((_JBTYPE *)(a1 + 160), 2);
  v2 = *(_DWORD *)(a1 + 120);
  if ( v2 )
  {
    v3 = (unsigned __int16 *)(a1 + 32);
    if ( v2 == 1 )
    {
      LODWORD(v5) = (*(unsigned __int16 *)(a1 + 24) | (unsigned __int64)(*v3 << 16)) / (unsigned int)v1;
      v4 = (unsigned int)(*(unsigned __int16 *)(a1 + 24) | (*v3 << 16)) >> 16;
      LODWORD(v6) = (*(unsigned __int16 *)(a1 + 24) | (unsigned __int64)(*v3 << 16)) % (unsigned int)v1;
    }
    else
    {
      v4 = *(_DWORD *)v3;
      LODWORD(v10) = *(_DWORD *)(a1 + 24);
      HIDWORD(v10) = *(_DWORD *)v3;
      v5 = v10 / v1;
      v6 = v10 % v1;
    }
  }
  else
  {
    LODWORD(v5) = *(unsigned __int16 *)(a1 + 24) / (unsigned int)v1;
    v4 = HIBYTE(*(unsigned __int16 *)(a1 + 24));
    LODWORD(v6) = *(unsigned __int16 *)(a1 + 24) % (unsigned int)v1;
  }
  if ( v4 >= (unsigned int)v1 )
    longjmp((_JBTYPE *)(a1 + 160), 3);
  sub_1403A2E60(a1, v5);
  *(_QWORD *)(v7 + 88) = v8;
  return sub_1403A2E60(v7, v6);
}
