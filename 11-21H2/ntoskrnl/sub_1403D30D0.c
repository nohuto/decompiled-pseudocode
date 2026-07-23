/*
 * XREFs of sub_1403D30D0 @ 0x1403D30D0
 * Callers:
 *     sub_1403D2F9C @ 0x1403D2F9C (sub_1403D2F9C.c)
 *     sub_1403D3080 @ 0x1403D3080 (sub_1403D3080.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_14022BA48 @ 0x14022BA48 (sub_14022BA48.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1403D3170 @ 0x1403D3170 (sub_1403D3170.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14062DAE4 @ 0x14062DAE4 (sub_14062DAE4.c)
 */

int __fastcall sub_1403D30D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v7; // rcx
  unsigned int v8; // esi
  __int64 v9; // rax
  unsigned int v10; // ebp
  __int64 v11; // rbx
  int result; // eax
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // [rsp+30h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v16 = 0;
  while ( 1 )
  {
    v7 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v7 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v13 = *(_DWORD *)(v7 + 24);
        *(_DWORD *)(v7 + 24) = v13 + 1;
        if ( v13 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v14 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v14 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v15 = *(_DWORD *)(v14 + 24) - 1;
        *(_DWORD *)(v14 + 24) = v15;
        if ( !v15 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v16, a2, a3, a4);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v8 = *(_DWORD *)(a1 + 588);
  v9 = sub_1403D3170(a1, a2);
  v10 = *(_DWORD *)(a1 + 588);
  v11 = v9;
  result = sub_140224100(a1);
  if ( (xmmword_140D06910 & 0x8000000) != 0 )
    result = sub_14062DAE4(a1, 1350LL, v8, v10);
  if ( v11 )
  {
    result = HIDWORD(KeGetPcr()[1].LockArray);
    if ( result != *(_DWORD *)(v11 + 36) )
      return sub_14022BA48();
  }
  return result;
}
