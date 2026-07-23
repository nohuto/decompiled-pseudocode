/*
 * XREFs of sub_140B06F28 @ 0x140B06F28
 * Callers:
 *     sub_140B06C7C @ 0x140B06C7C (sub_140B06C7C.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_1403C3548 @ 0x1403C3548 (sub_1403C3548.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405EC554 @ 0x1405EC554 (sub_1405EC554.c)
 *     sub_1405EEDA4 @ 0x1405EEDA4 (sub_1405EEDA4.c)
 *     sub_1405EF24C @ 0x1405EF24C (sub_1405EF24C.c)
 */

__int64 __fastcall sub_140B06F28(__int64 a1)
{
  __int64 v2; // rbx
  __int64 *v3; // rbx
  unsigned __int64 v4; // rsi
  unsigned int v5; // edi
  int v6; // ecx
  char *v8; // rbx
  PIMAGE_NT_HEADERS v9; // rax
  const char *v10; // rax
  unsigned int v11; // edx
  unsigned __int64 v12; // rbx
  PIMAGE_NT_HEADERS v13; // rbx
  const char *v14; // rax
  const char *v15; // rax
  unsigned int v16; // r8d
  int v17; // ecx
  __int64 v18; // [rsp+50h] [rbp-B8h]
  __int64 v19; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v20[4]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v21[14]; // [rsp+70h] [rbp-98h] BYREF

  v18 = 0LL;
  v2 = *(_QWORD *)(a1 + 16);
  dword_140C4F404 = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 3500LL) >> 12;
  if ( (xmmword_140D06920 & 0x20000000000LL) != 0
    && (v18 = v2,
        v8 = *(char **)(v2 + 48),
        v9 = RtlImageNtHeader(v8),
        v10 = sub_1405EC554((__int64)v9, "RETPOL"),
        v11 = *((_DWORD *)v10 + 2),
        qword_140C4F420 = &v8[*((unsigned int *)v10 + 3)],
        dword_140C4F440 = (v11 >> 12) + ((v11 & 0xFFF) != 0),
        dword_140C4F440 > (unsigned int)dword_140C4F404) )
  {
    v6 = -1073741811;
  }
  else if ( (dword_140D06880 & 0x4000) != 0
         && ((xmmword_140D06920 & 0x20000000000LL) != 0 || (xmmword_140D06920 & 0x40000000000LL) != 0) )
  {
    v12 = ((unsigned __int64)xmmword_140D06920 >> 41) & 1;
    if ( (xmmword_140D06920 & 0x40000000000LL) != 0 )
      LODWORD(v12) = v12 | 2;
    memset(v21, 0, 0x68uLL);
    v21[1] = (unsigned int)v12;
    v6 = sub_140358A20(2u, 220, 0, (__int64)v21);
  }
  else
  {
    if ( (xmmword_140D06920 & 0x20000000000LL) == 0 )
      goto LABEL_4;
    v13 = RtlImageNtHeader(*(PVOID *)(v18 + 48));
    v14 = sub_1405EC554((__int64)v13, "INITKDBG");
    v20[0] = *((_DWORD *)v14 + 3);
    LODWORD(v19) = *((_DWORD *)v14 + 2);
    v15 = sub_1405EC554((__int64)v13, "MINIEX");
    v16 = *(_DWORD *)(v18 + 64);
    v17 = *((_DWORD *)v15 + 3);
    HIDWORD(v19) = *((_DWORD *)v15 + 2);
    v20[1] = v17;
    v6 = sub_1405EF24C(
           *(char **)(v18 + 48),
           *(_QWORD *)(v18 + 48),
           v16,
           (__int64)qword_140C4F420,
           (__int64)qword_140C4F420,
           1,
           (__int64)v20,
           (__int64)&v19,
           2u);
    if ( v6 >= 0 )
    {
      v6 = sub_1405EEDA4(
             *(_QWORD *)(v18 + 48),
             *(_QWORD *)(v18 + 48),
             (unsigned int *)qword_140C4F420,
             (int)qword_140C4F420);
      if ( v6 >= 0 )
      {
LABEL_4:
        if ( (xmmword_140D06920 & 0x40000000000LL) != 0 )
        {
          v3 = *(__int64 **)(a1 + 16);
          v4 = (unsigned __int64)sub_140B52040 & -(__int64)((xmmword_140D06920 & 0x20000000000LL) != 0);
          v5 = 0;
          while ( 1 )
          {
            v6 = sub_1403C3548(
                   (char *)v3[6],
                   v3[6],
                   *((_DWORD *)v3 + 16),
                   v4,
                   (__int64)qword_140C4F420,
                   (__int64)qword_140C4F420,
                   1,
                   (xmmword_140D06920 & 0x20000000000LL) == 0);
            if ( ((v6 + 0x80000000) & 0x80000000) == 0 && v6 != -1073741637 )
              break;
            *((_DWORD *)v3 + 26) |= 0x80u;
            ++v5;
            v3 = (__int64 *)*v3;
            if ( v5 >= 2 )
              goto LABEL_8;
          }
        }
        else
        {
LABEL_8:
          v6 = 0;
        }
      }
    }
  }
  dword_140C4F444 = v6;
  return (unsigned int)v6;
}
