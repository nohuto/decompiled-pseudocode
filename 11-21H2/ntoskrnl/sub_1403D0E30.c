/*
 * XREFs of sub_1403D0E30 @ 0x1403D0E30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2FA8 @ 0x1403A2FA8 (sub_1403A2FA8.c)
 *     sub_1403A3038 @ 0x1403A3038 (sub_1403A3038.c)
 *     sub_1403A30B4 @ 0x1403A30B4 (sub_1403A30B4.c)
 *     sub_1403A346C @ 0x1403A346C (sub_1403A346C.c)
 *     sub_1403D75CC @ 0x1403D75CC (sub_1403D75CC.c)
 *     longjmp @ 0x1403DF970 (longjmp.c)
 */

__int64 __fastcall sub_1403D0E30(__int64 a1)
{
  __int64 result; // rax
  unsigned __int16 *v3; // rdx
  int v4; // eax
  int v5; // ebx
  int v6; // edx
  unsigned __int16 *v7; // rax
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  sub_1403A346C(a1);
  result = sub_1403A30B4(a1, &v8);
  v3 = (unsigned __int16 *)result;
  if ( result )
  {
    v4 = v8;
    if ( *(_BYTE *)(a1 + 81) == 18 )
    {
      v4 = v8 & 1;
      v8 = v4;
    }
    *(_DWORD *)(a1 + 124) += v4;
    if ( *(_DWORD *)(a1 + 124) == 36 )
    {
      sub_1403A2FA8(a1, v3);
    }
    else
    {
      sub_1403A3038(a1, v3);
      if ( ((v8 - 3) & 0xFFFFFFFD) == 0 )
      {
        if ( *(_BYTE *)(a1 + 142) )
          longjmp((_JBTYPE *)(a1 + 160), 11);
        v5 = *(_DWORD *)(a1 + 120);
        v6 = *(_DWORD *)(a1 + 128) + 1;
        *(_DWORD *)(a1 + 120) = 1;
        v7 = (unsigned __int16 *)sub_1403D75CC(a1, (unsigned int)(v5 + v6));
        sub_1403A2FA8(a1, v7);
        *(_WORD *)(a1 + 82) = *(_WORD *)(a1 + 108);
        *(_DWORD *)(a1 + 120) = v5;
      }
    }
    return 1LL;
  }
  return result;
}
