/*
 * XREFs of sub_1402CC9A0 @ 0x1402CC9A0
 * Callers:
 *     sub_140358400 @ 0x140358400 (sub_140358400.c)
 *     sub_1405B4A34 @ 0x1405B4A34 (sub_1405B4A34.c)
 * Callees:
 *     sub_140230700 @ 0x140230700 (sub_140230700.c)
 *     sub_1402BEEA0 @ 0x1402BEEA0 (sub_1402BEEA0.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402CB2D0 @ 0x1402CB2D0 (sub_1402CB2D0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_14033B6A0 @ 0x14033B6A0 (sub_14033B6A0.c)
 *     sub_1403B76EC @ 0x1403B76EC (sub_1403B76EC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1402CC9A0(__int64 a1, unsigned int a2, __int64 a3, int a4, _DWORD *a5)
{
  int v7; // esi
  unsigned int v8; // ebp
  unsigned __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // r12
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  unsigned int v15; // edi
  unsigned __int64 v16; // r12
  __int64 v17; // r14
  unsigned int v18; // eax
  unsigned __int64 v19; // rax
  char v20; // cl
  char v21; // al
  __int64 v22; // rbx
  int v23; // ebp
  __int64 v24; // rdx
  __int64 v25; // r11
  __int64 v27; // [rsp+38h] [rbp-90h]
  unsigned __int64 v28; // [rsp+40h] [rbp-88h]
  __int64 v30; // [rsp+60h] [rbp-68h] BYREF
  int v31; // [rsp+68h] [rbp-60h]
  int v32; // [rsp+6Ch] [rbp-5Ch]
  __int16 v33; // [rsp+70h] [rbp-58h]
  __int64 v34; // [rsp+72h] [rbp-56h]
  int v35; // [rsp+7Ah] [rbp-4Eh]
  __int16 v36; // [rsp+7Eh] [rbp-4Ah]

  v7 = 0;
  *a5 = 0;
  v8 = 0;
  v9 = qword_14001C780[a2];
  v28 = qword_14001C780[a2 - 1];
  v10 = 48 * a1 - 0x220000000000LL;
  v11 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL));
  v12 = 24512LL * *((unsigned int *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((48 * a1) >> 4)) + 2);
  v27 = v12 + *(_QWORD *)(v11 + 16);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v27 + 22848));
  if ( !*(_QWORD *)(v27 + 22904) )
  {
    v13 = *(_QWORD *)(v11 + 16);
    v14 = v28;
    v15 = 0;
    ++*(_DWORD *)(v12 + v13 + 22788);
    v16 = v28 / v9;
    if ( v28 / v9 )
    {
      v17 = 48 * v9;
      do
      {
        if ( !a4 )
        {
          if ( qword_140C50710 )
            v18 = sub_1403B76EC(0xAAAAAAAAAAAAAAABuLL * ((v10 + 0x220000000000LL) >> 4));
          else
            v18 = 0;
          sub_1402CB2D0((_QWORD *)v27, v10, a2, v18, 34);
        }
        v19 = *(_QWORD *)(v10 + 16);
        v8 |= ((v19 & 0x3E0) != 0) + 1;
        if ( qword_140C50780 && (v19 & 0x10) == 0 )
          v19 &= ~qword_140C50780;
        if ( HIDWORD(v19) == 4294967293 )
          v7 |= 1u;
        else
          v7 |= 2u;
        v20 = *(_BYTE *)(v10 + 36) & 0xFC;
        if ( v15 )
        {
          v21 = *(_BYTE *)(v10 + 34);
          *(_QWORD *)(v10 + 8) = 0LL;
          *(_BYTE *)(v10 + 36) = v20;
          *(_BYTE *)(v10 + 34) = v21 & 0xF8 | 6;
        }
        else
        {
          *(_BYTE *)(v10 + 36) = v20 | ~(a2 - 1) & 3;
        }
        ++v15;
        v10 += v17;
      }
      while ( v15 < v16 );
      v14 = v28;
    }
    v22 = -48LL * v14 + v10;
    v23 = (v8 >> 1) & 1;
    if ( a4 )
    {
      v23 = 1;
    }
    else if ( !sub_140230700() )
    {
      v24 = 4294967293LL;
      goto LABEL_20;
    }
    v24 = 0LL;
LABEL_20:
    *(_QWORD *)(v22 + 16) = sub_14033B6A0(*(_QWORD *)(v22 + 16), v24);
    v30 = a1;
    v34 = v25;
    v35 = v25;
    v36 = v25;
    v31 = v23;
    v32 = 6;
    v33 = 258;
    sub_1402BEEA0((__int64)&v30);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v27 + 22848));
    return 1LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v27 + 22848));
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 0LL;
}
