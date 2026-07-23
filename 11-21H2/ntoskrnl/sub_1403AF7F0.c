/*
 * XREFs of sub_1403AF7F0 @ 0x1403AF7F0
 * Callers:
 *     sub_1403AF5E4 @ 0x1403AF5E4 (sub_1403AF5E4.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     sub_1403AF9E8 @ 0x1403AF9E8 (sub_1403AF9E8.c)
 *     sub_1403DC10C @ 0x1403DC10C (sub_1403DC10C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403AF7F0(__int64 a1)
{
  __int64 v1; // rdi
  char v2; // bp
  int v3; // edx
  char v4; // r14
  unsigned int v5; // r9d
  unsigned __int8 v7; // al
  char *v8; // rcx
  __int64 (__fastcall *v9)(); // rax
  __int64 v10; // r10
  unsigned __int8 v11; // bl
  __int64 (__fastcall *v13)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16); // rax
  __int64 v14; // r11
  __int64 v15; // r10
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v18; // r9
  int v19; // eax
  bool v20; // zf
  _BYTE v21[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 (__fastcall *v22)(); // [rsp+28h] [rbp-40h]
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(unsigned int *)(a1 + 88);
  v2 = 0;
  v3 = *(unsigned __int8 *)(a1 + 92);
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 96);
  v21[0] = 0;
  PreviousAffinity = 0LL;
  if ( (unsigned int)v1 > 0xFF || (unsigned __int8)v3 > 0xFu || v3 != (unsigned int)v1 >> 4 && (_BYTE)v3 )
    return 3221225711LL;
  if ( v5 >= (unsigned int)dword_140D06884 )
    return 3221225711LL;
  v7 = *(_BYTE *)(a1 + 93);
  if ( v7 < (unsigned __int8)v3 )
  {
    if ( v7 )
      return 3221225711LL;
  }
  sub_1403AF9E8(v5, v21, &PreviousAffinity);
  v8 = (char *)KeGetPcr()->IdtBase + 16 * v1;
  LOWORD(v22) = *(_WORD *)v8;
  WORD1(v22) = *((_WORD *)v8 + 3);
  HIDWORD(v22) = *((_DWORD *)v8 + 2);
  if ( !*(_BYTE *)(a1 + 95) )
  {
    v9 = sub_140AB62C0;
    if ( !byte_140E01840 )
      v9 = sub_140422B50;
    if ( v22 == (__int64 (__fastcall *)())((char *)v9 + 8 * v1) )
    {
      v10 = *((_QWORD *)KeGetCurrentPrcb() + v1 + 1664);
      if ( !v10 )
      {
        if ( !*(_BYTE *)(a1 + 93) )
        {
          *(_QWORD *)(a1 + 16) = a1 + 8;
          *(_QWORD *)(a1 + 8) = a1 + 8;
          *(_QWORD *)(a1 + 80) = sub_140420C10;
        }
        v4 = 1;
        *(_BYTE *)(a1 + 95) = 1;
        goto LABEL_14;
      }
      if ( (unsigned int)v1 >= 0x30 )
      {
        v2 = 1;
        if ( *(_DWORD *)(a1 + 108) == *(_DWORD *)(v10 + 108) )
        {
          if ( *(_BYTE *)(a1 + 100) )
          {
            if ( *(_BYTE *)(v10 + 100) )
            {
              if ( *(__int64 (__fastcall **)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))(a1 + 80) == sub_1404215E0 )
              {
                v13 = *(__int64 (__fastcall **)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))(v10 + 80);
                if ( v13 == sub_1404215E0 || v13 == sub_140420C10 )
                {
                  *(_BYTE *)(a1 + 95) = 1;
                  v4 = 1;
                  if ( *(__int64 (__fastcall **)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))(v10 + 80) != sub_140420C10 )
                  {
                    *(_QWORD *)(v10 + 80) = sub_140420C10;
                    *(_QWORD *)(v10 + 16) = v10 + 8;
                    *(_QWORD *)(v10 + 8) = v10 + 8;
                  }
                  sub_1403DC10C(v10, a1);
                  if ( !*(_BYTE *)(v15 + 93) )
                  {
                    if ( *(_BYTE *)(a1 + 93) )
                    {
                      *(_QWORD *)(a1 + 80) = v14;
LABEL_14:
                      *((_QWORD *)KeGetCurrentPrcb() + v1 + 1664) = a1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v11 = v21[0];
    if ( v21[0] <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v18 = *((_QWORD *)CurrentPrcb + 4375);
      v11 = v21[0];
      v19 = ~(unsigned __int16)(-1LL << (v21[0] + 1));
      v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
      *(_DWORD *)(v18 + 20) &= v19;
      if ( v20 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  else
  {
    v11 = v21[0];
  }
  __writecr8(v11);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( v4 )
    return v2 != 0 ? 0x127 : 0;
  return 3221225711LL;
}
