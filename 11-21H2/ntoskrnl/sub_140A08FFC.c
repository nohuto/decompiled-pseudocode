/*
 * XREFs of sub_140A08FFC @ 0x140A08FFC
 * Callers:
 *     WheaAttemptClearPoison @ 0x140A08BE0 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140A08CB0 (WheaAttemptPhysicalPageOffline.c)
 *     sub_140A091D0 @ 0x140A091D0 (sub_140A091D0.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14058F250 (MmMarkPhysicalMemoryAsBad.c)
 *     sub_140644D30 @ 0x140644D30 (sub_140644D30.c)
 *     sub_140644EEC @ 0x140644EEC (sub_140644EEC.c)
 *     sub_140A0921C @ 0x140A0921C (sub_140A0921C.c)
 *     sub_140A092FC @ 0x140A092FC (sub_140A092FC.c)
 *     sub_140A0947C @ 0x140A0947C (sub_140A0947C.c)
 */

__int64 __fastcall sub_140A08FFC(LARGE_INTEGER a1, __int64 a2, char a3, char a4, char a5, char a6)
{
  __int64 v6; // r12
  char v7; // r13
  int v9; // r15d
  char v10; // si
  char v11; // bl
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // r9d
  unsigned int v16; // edi
  int v17; // eax
  __int64 v21; // [rsp+38h] [rbp-41h] BYREF
  __int64 v22; // [rsp+40h] [rbp-39h] BYREF
  LARGE_INTEGER StartAddress; // [rsp+48h] [rbp-31h] BYREF
  __int128 Src; // [rsp+50h] [rbp-29h] BYREF
  __int128 v25; // [rsp+60h] [rbp-19h]
  _QWORD v26[2]; // [rsp+70h] [rbp-9h] BYREF

  StartAddress = a1;
  v6 = a2 << 12;
  v7 = 0;
  memset(v26, 0, 9);
  v21 = a2 << 12;
  v22 = 4096LL;
  Src = 0LL;
  v25 = 0LL;
  if ( a4 )
  {
    v9 = 2;
  }
  else
  {
    v9 = 1;
    v21 = v6 | 1;
  }
  v10 = -1;
  v11 = -1;
  v12 = MmMarkPhysicalMemoryAsBad((int *)&v21, &v22);
  v16 = v12;
  if ( v12 >= 0 )
  {
    v11 = v12 == 0;
    if ( byte_140D04C68 && a5 && (int)sub_140A092FC(&StartAddress) >= 0 )
      return v16;
    LOBYTE(v13) = a3 != 0;
    if ( (!v11 || byte_140D01199) && !a6 )
    {
      if ( byte_140D01199 )
      {
        LOBYTE(v13) = v13 | 0x40;
        if ( v11 )
          LOBYTE(v13) = v13 | 0x80;
      }
      LOBYTE(v14) = a4;
      sub_140A0921C(a2, v13, v14);
    }
    if ( KeGetCurrentIrql() <= 2u )
    {
      *(_QWORD *)&Src = 0x1674C6857LL;
      *((_QWORD *)&Src + 1) = 41LL;
      *(_QWORD *)&v25 = 0x800000064C4E524BuLL;
      *((_QWORD *)&v25 + 1) = 0x900000002LL;
      LODWORD(v26[0]) = v9;
      BYTE4(v26[0]) = v11;
      *(_DWORD *)((char *)v26 + 5) = a2;
      WheaLogInternalEvent(&Src);
    }
  }
  if ( byte_140CE1AD3 )
  {
    if ( dword_140C0DA80 == 1 )
    {
      v17 = sub_140644D30(a2);
      goto LABEL_22;
    }
    if ( dword_140C0DA80 == 2 )
    {
      v17 = sub_140644EEC(a2);
LABEL_22:
      if ( v17 >= 0 )
        v7 = 1;
      else
        v16 = v17;
    }
  }
  if ( v11 != -1 )
    v10 = v11 == 0;
  LOBYTE(v15) = v7;
  LOBYTE(v14) = a4;
  LOBYTE(v13) = v10;
  sub_140A0947C(v6, v13, v14, v15, a3);
  return v16;
}
