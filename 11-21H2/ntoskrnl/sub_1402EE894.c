/*
 * XREFs of sub_1402EE894 @ 0x1402EE894
 * Callers:
 *     sub_1402ECD10 @ 0x1402ECD10 (sub_1402ECD10.c)
 *     KeInsertQueueApc @ 0x1402ED9E0 (KeInsertQueueApc.c)
 *     sub_1402EDFE8 @ 0x1402EDFE8 (sub_1402EDFE8.c)
 *     sub_1402EE4D4 @ 0x1402EE4D4 (sub_1402EE4D4.c)
 *     sub_1402EF710 @ 0x1402EF710 (sub_1402EF710.c)
 *     sub_1402EFA40 @ 0x1402EFA40 (sub_1402EFA40.c)
 *     sub_140570750 @ 0x140570750 (sub_140570750.c)
 * Callees:
 *     sub_14022BA48 @ 0x14022BA48 (sub_14022BA48.c)
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 *     sub_1402F6ED0 @ 0x1402F6ED0 (sub_1402F6ED0.c)
 */

char __fastcall sub_1402EE894(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  char v5; // r10
  char v6; // al
  bool v7; // cf
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a2 + 8);
  LODWORD(v4) = *(char *)(a2 + 80);
  v5 = *(_BYTE *)(a2 + 81);
  if ( (_DWORD)v4 == *(unsigned __int8 *)(v3 + 586) )
  {
    if ( v3 == *(_QWORD *)(a1 + 8) )
    {
      if ( !v5 )
      {
        v4 = *(_QWORD *)(a2 + 48);
        if ( !*(_DWORD *)(v3 + 484) || !v4 && !*(_WORD *)(v3 + 486) )
        {
          *(_BYTE *)(v3 + 193) = 1;
          if ( !a3 )
          {
            *(_DWORD *)(v3 + 116) |= 0x40u;
            return v4;
          }
LABEL_24:
          LOBYTE(v4) = HalRequestSoftwareInterrupt(1);
        }
      }
    }
    else if ( v5 )
    {
      LOBYTE(v4) = *(_BYTE *)(v3 + 388);
      if ( (_BYTE)v4 == 5 && *(_BYTE *)(v3 + 391) == 1 )
      {
        v6 = *(_BYTE *)(v3 + 112) & 7;
        v7 = v6 == 3;
        LOBYTE(v4) = v6 - 3;
        if ( !v7 && (_BYTE)v4 != 1 )
        {
          LODWORD(v4) = *(_DWORD *)(v3 + 116);
          if ( (v4 & 0x10) != 0 || (*(_BYTE *)(v3 + 194) & 2) != 0 )
          {
            *(_BYTE *)(v3 + 112) |= 0x40u;
            LOBYTE(v4) = sub_1402F6ED0(a1, v3, 192LL, 0LL);
            if ( (_BYTE)v4 )
              *(_BYTE *)(v3 + 194) |= 2u;
          }
        }
      }
    }
    else
    {
      *(_BYTE *)(v3 + 193) = 1;
      _InterlockedOr(v9, 0);
      LOBYTE(v4) = *(_BYTE *)(v3 + 388);
      if ( (_BYTE)v4 == 2 )
      {
        if ( HIDWORD(KeGetPcr()[1].LockArray) != (*(_DWORD *)(v3 + 536) & 0x7FFFFFFF) )
        {
          LOBYTE(v4) = sub_14022BA48();
          return v4;
        }
        goto LABEL_24;
      }
      if ( (_BYTE)v4 == 5
        && !*(_BYTE *)(v3 + 390)
        && !*(_WORD *)(v3 + 486)
        && (!*(_QWORD *)(a2 + 48) || !*(_WORD *)(v3 + 484) && !*(_BYTE *)(v3 + 192)) )
      {
        LOBYTE(v4) = sub_1402F6ED0(a1, v3, 256LL, 0LL);
        *(_BYTE *)(v3 + 112) |= 0x20u;
      }
    }
  }
  return v4;
}
