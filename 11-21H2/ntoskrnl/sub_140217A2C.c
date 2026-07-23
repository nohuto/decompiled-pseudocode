/*
 * XREFs of sub_140217A2C @ 0x140217A2C
 * Callers:
 *     sub_1402175B8 @ 0x1402175B8 (sub_1402175B8.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402F0AF8 @ 0x1402F0AF8 (sub_1402F0AF8.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F35E0 @ 0x1402F35E0 (sub_1402F35E0.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_140217A2C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  int v15; // [rsp+48h] [rbp+20h] BYREF

  LOBYTE(v6) = sub_1402F0AF8();
  if ( !(_BYTE)v6 )
  {
    LOBYTE(v6) = *(_BYTE *)v7 & 0x7F;
    if ( (_BYTE)v6 == 2 && (*(_DWORD *)(v7 + 4))-- == 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v15 = 0;
      while ( 1 )
      {
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v10 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v11 = *(_DWORD *)(v10 + 24);
            *(_DWORD *)(v10 + 24) = v11 + 1;
            if ( v11 == -1 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
          break;
        v12 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v12 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v13 = *(_DWORD *)(v12 + 24) - 1;
            *(_DWORD *)(v12 + 24) = v13;
            if ( !v13 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        do
          sub_1402F32E0(&v15);
        while ( *(_QWORD *)(a2 + 64) );
      }
      sub_1402F35E0(a1, a2, a3);
      LOBYTE(v6) = sub_140224100(a2);
      if ( (*(_BYTE *)(a1 + 48) & 2) != 0 )
      {
        v6 = sub_140347C10(a1, 0LL, 1LL);
        if ( v6 )
          *(_BYTE *)(v6 + 18) = 1;
      }
    }
  }
  return v6;
}
