/*
 * XREFs of sub_140790CF8 @ 0x140790CF8
 * Callers:
 *     sub_1406EF64C @ 0x1406EF64C (sub_1406EF64C.c)
 *     sub_14079028C @ 0x14079028C (sub_14079028C.c)
 *     sub_140797054 @ 0x140797054 (sub_140797054.c)
 *     sub_1409E448C @ 0x1409E448C (sub_1409E448C.c)
 *     sub_1409E971C @ 0x1409E971C (sub_1409E971C.c)
 *     sub_1409EC340 @ 0x1409EC340 (sub_1409EC340.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_140231240 @ 0x140231240 (sub_140231240.c)
 *     sub_1402312E0 @ 0x1402312E0 (sub_1402312E0.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402DF880 @ 0x1402DF880 (sub_1402DF880.c)
 *     KeQueryTimeIncrement @ 0x1402F1D40 (KeQueryTimeIncrement.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140790EEC @ 0x140790EEC (sub_140790EEC.c)
 */

__int64 __fastcall sub_140790CF8(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  void *v5; // rbx
  int v6; // r14d
  __int64 v8; // rdx
  __int64 v9; // rdi
  unsigned int v10; // r11d
  unsigned int v11; // r8d
  unsigned int v12; // edx
  __int64 v13; // rbx
  int *v14; // rax
  __int64 v15; // r11
  unsigned __int8 v16; // cl
  int v17; // r8d
  int v18; // r10d
  ULONG_PTR v19; // rax
  int v20; // eax
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // [rsp+40h] [rbp-99h] BYREF
  __int64 v24; // [rsp+48h] [rbp-91h] BYREF
  int v25; // [rsp+50h] [rbp-89h]
  int v26; // [rsp+54h] [rbp-85h]
  __int128 v27; // [rsp+58h] [rbp-81h]
  _OWORD v28[3]; // [rsp+68h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+A0h] [rbp-39h] BYREF
  __int64 *v30; // [rsp+C0h] [rbp-19h]
  __int64 v31; // [rsp+C8h] [rbp-11h]
  __int64 *v32; // [rsp+D0h] [rbp-9h]
  __int64 v33; // [rsp+D8h] [rbp-1h]
  __int64 v34; // [rsp+E0h] [rbp+7h]
  __int64 v35; // [rsp+E8h] [rbp+Fh]

  v2 = *(_WORD *)(a1 + 98);
  v5 = 0LL;
  v6 = 0;
  memset(v28, 0, sizeof(v28));
  v27 = 0LL;
  if ( (v2 & 1) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 80);
    v23 = v8;
    if ( *(_QWORD *)(a1 + 88) )
    {
      v9 = MEMORY[0xFFFFF78000000320];
      if ( (*(_BYTE *)(a1 + 98) & 0x10) != 0 )
      {
        v19 = sub_1402DF880(*(_DWORD *)(a1 + 56));
        v5 = (void *)v19;
        if ( !v19 )
          return (unsigned int)-1073741275;
        v6 = sub_1402312E0(v19);
        if ( v6 < 0 )
        {
          ObfDereferenceObject(v5);
          return (unsigned int)v6;
        }
        v8 = v23;
      }
      if ( *(_DWORD *)a2 == 3 )
      {
        if ( (*(_BYTE *)(a1 + 98) & 8) != 0 )
        {
          v15 = *(_QWORD *)(a1 + 32);
          LOBYTE(v8) = *(_BYTE *)(a2 + 112);
          v16 = *(_BYTE *)(v15 + 90);
          v17 = *(_DWORD *)(v15 + 80);
          v18 = *(_DWORD *)(v15 + 84);
          LOWORD(v24) = *(_WORD *)(v15 + 88);
          WORD1(v24) = v16;
          HIDWORD(v24) = v17;
          v25 = v18;
          v26 = 0;
          sub_14042A5E0(v15 + 40, v8);
        }
        else
        {
          v10 = *(_DWORD *)(a2 + 72);
          v11 = *(_DWORD *)(a2 + 116);
          v24 = *(_QWORD *)(a1 + 88);
          v12 = 0;
          if ( v11 )
          {
            v14 = (int *)(a2 + 132);
            while ( *v14 < 0 && *v14 != 0x80000000 )
            {
              ++v12;
              v14 += 4;
              if ( v12 >= v11 )
                goto LABEL_10;
            }
            v20 = *(_DWORD *)(a2 + 16LL * v12 + 128);
            *(_QWORD *)&v27 = a2 + *(_QWORD *)(a2 + 16LL * v12 + 120);
            HIDWORD(v27) = *(_DWORD *)(a2 + 16LL * v12 + 132);
            DWORD2(v27) = v20;
          }
LABEL_10:
          sub_14042A5E0(a2 + 56, v10);
        }
      }
      else
      {
        v6 = -1073741811;
      }
      if ( v5 )
      {
        sub_140231240((__int64)v5, (__int64)v28);
        ObfDereferenceObject(v5);
      }
      v13 = MEMORY[0xFFFFF78000000320];
      if ( (v13 - v9) * KeQueryTimeIncrement() >= 600010000
        && (unsigned int)dword_140C043E0 > 5
        && sub_1402A2000((__int64)&dword_140C043E0, 0x200000000800LL) )
      {
        v31 = 8LL;
        v24 = 2164260864LL;
        v33 = 8LL;
        v30 = &v24;
        v35 = 16LL;
        v32 = &v23;
        v22 = *(_QWORD *)(a1 + 32);
        v23 = v21 / 10000;
        v34 = v22 + 40;
        sub_14020A9C4((__int64)&dword_140C043E0, (unsigned __int8 *)byte_140035D2B, 0LL, 0LL, 5u, &v29);
      }
    }
  }
  else if ( (v2 & 2) != 0 )
  {
    return (unsigned int)sub_140790EEC(*(_QWORD *)(a1 + 80), a2, a1);
  }
  return (unsigned int)v6;
}
