/*
 * XREFs of sub_14033AC90 @ 0x14033AC90
 * Callers:
 *     sub_1402C1F50 @ 0x1402C1F50 (sub_1402C1F50.c)
 *     sub_14037E554 @ 0x14037E554 (sub_14037E554.c)
 * Callees:
 *     sub_1402297E4 @ 0x1402297E4 (sub_1402297E4.c)
 *     sub_14025F6B0 @ 0x14025F6B0 (sub_14025F6B0.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     sub_14033B190 @ 0x14033B190 (sub_14033B190.c)
 *     sub_14033B6A0 @ 0x14033B6A0 (sub_14033B6A0.c)
 *     sub_14059C8C8 @ 0x14059C8C8 (sub_14059C8C8.c)
 *     sub_14059D028 @ 0x14059D028 (sub_14059D028.c)
 */

void __fastcall sub_14033AC90(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int32 v3; // ebx
  unsigned int v4; // ebp
  __int64 **v7; // rsi
  unsigned __int64 v8; // r12
  int v9; // edx
  unsigned __int64 v10; // r12
  __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r12
  unsigned int v16; // edi
  unsigned __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned __int64 v19; // rbp
  int v20; // r13d
  unsigned __int64 v21; // rbp
  __int64 i; // r13
  unsigned int v23; // ebp
  unsigned int v24; // r12d
  __int64 v25; // rdx
  int v26; // r9d
  unsigned int v27; // eax
  unsigned __int64 v28; // rsi
  unsigned int v29; // edi
  unsigned __int64 v30; // r14
  __int64 v31; // rbp
  int v32; // eax
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rax
  __int64 v35; // r12
  __int64 v36; // rdx
  unsigned int v37; // eax
  __int64 v38; // r12
  int v39; // eax
  unsigned int v40; // r12d
  int v41; // r12d
  unsigned __int64 v42; // [rsp+20h] [rbp-78h]
  __int128 v43; // [rsp+30h] [rbp-68h] BYREF
  __int128 v44; // [rsp+40h] [rbp-58h]
  __int64 v45; // [rsp+50h] [rbp-48h]
  __int64 v46; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v47; // [rsp+B0h] [rbp+18h]
  int v48; // [rsp+B8h] [rbp+20h]

  v47 = a3;
  v3 = *(_DWORD *)(a1 + 896);
  v4 = v3 & 0x3FF;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  if ( v4 >= 0x10 )
  {
    v7 = 0LL;
    v48 = 0;
    if ( !a3 )
    {
      v16 = 1;
      if ( !(unsigned int)sub_14059C8C8(a2, &v43, 1LL) )
        return;
      v15 = *((_QWORD *)&v44 + 1);
      v42 = v44;
      v48 = 1;
      goto LABEL_14;
    }
    if ( (*(_BYTE *)(a3 + 184) & 7) != 0 )
    {
      v42 = a2 & 0xFFFFFFFFFFFFF000uLL;
      v15 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      v16 = 1;
LABEL_15:
      v17 = v42;
      v18 = ((__int64)(v15 - v42) >> 3) + 1;
      if ( v18 > v4 )
      {
        v35 = (__int64)(v15 - a2) >> 3;
        v36 = (__int64)(a2 - v42) >> 3;
        v37 = v18 - v4;
        if ( (unsigned int)v35 < v37 )
        {
          v39 = v37 - v35;
          v38 = 0LL;
          LODWORD(v36) = v36 - v39;
        }
        else
        {
          v38 = (unsigned int)v35 - v37;
        }
        v15 = a2 + 8 * v38;
        v42 = a2 - 8LL * (unsigned int)v36;
        v17 = v42;
      }
      if ( a3 )
        v16 = 129;
      if ( v7 && *((int *)v7 + 13) < 0 )
        v16 |= ((_DWORD)v7[6] & 0xF80 | 0x40u) >> 5;
      v19 = a2 - 8;
      v20 = 0;
      LODWORD(v46) = 0;
      if ( a2 - 8 >= v17 )
      {
        do
        {
          if ( !(unsigned int)sub_14033B190(a1, v19, v16) )
            break;
          ++v20;
          v19 -= 8LL;
        }
        while ( v19 >= v42 );
        LODWORD(v46) = v20;
      }
      v21 = a2 + 8;
      for ( i = 0LL; v21 <= v15; v21 += 8LL )
      {
        if ( !(unsigned int)sub_14033B190(a1, v21, v16) )
          break;
        i = (unsigned int)(i + 1);
      }
      v23 = v46;
      v24 = i + v46 + 1;
      v46 = 0LL;
      if ( sub_1402297E4(a1, &v46) )
      {
        v46 = 0LL;
        v26 = 16;
      }
      if ( v24 == 1 )
      {
        if ( v26 )
          goto LABEL_41;
        v26 = 64;
      }
      v27 = sub_14025F6B0(a1, (unsigned __int64 *)&v46, v24, v26 | 1u);
      v25 = v27;
      if ( v27 == v24 )
        goto LABEL_29;
      _InterlockedCompareExchange(
        (volatile signed __int32 *)(a1 + 896),
        v3 ^ ((unsigned __int16)v27 ^ (unsigned __int16)v3) & 0x3FF,
        v3);
      if ( v27 )
      {
        v40 = v24 - v27;
        if ( (unsigned int)i < v40 )
        {
          v41 = v40 - i;
          i = 0LL;
          v23 -= v41;
        }
        else
        {
          i = (unsigned int)i - v40;
        }
LABEL_29:
        v28 = a2 + 8 * i;
        v29 = v16 & 0xFFFFFFFE;
        v30 = a2 - 8LL * v23;
        if ( v30 <= v28 )
        {
          v31 = v47;
          do
          {
            v32 = sub_14033B190(a1, v30, v29);
            v33 = v46;
            if ( !v32 )
              sub_1402E20D0(a1, v46, v31 != 0);
            v34 = v33;
            if ( qword_140C50780 && (v33 & 0x10) == 0 )
              v33 &= ~qword_140C50780;
            if ( v34 && qword_140C50780 )
            {
              if ( (v34 & 0x10) != 0 )
                LODWORD(v34) = v34 & 0xFFFFFFEF;
              else
                LODWORD(v34) = ~(_DWORD)qword_140C50780 & v34;
            }
            v30 += 8LL;
            v46 = sub_1402CCC50((v33 + 0x100000000LL) ^ (unsigned int)v34 ^ (unsigned int)v33);
          }
          while ( v30 <= v28 );
        }
      }
LABEL_41:
      if ( v48 )
        sub_14059D028(&v43, v25);
      return;
    }
    v8 = a2 << 25 >> 16;
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL)
                                                    + 284LL));
    v7 = sub_1403126F0(v8);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL)
                                                      + 284LL));
    if ( v7 )
    {
      v9 = *((_DWORD *)v7 + 12);
      if ( (v9 & 0x200004) == 0x200000
        && (v9 & 0x70) == 0
        && ((v9 & 0x200000) == 0 || (v9 & 0x800000) == 0 && (v9 & 0x180000u) < 0x100000) )
      {
        v10 = v8 & 0xFFFFFFFFFFE00000uLL;
        if ( v10 >= (*((unsigned int *)v7 + 6) | ((unsigned __int64)*((unsigned __int8 *)v7 + 32) << 32)) << 12 )
          v11 = (v10 >> 9) & 0x7FFFFFFFF8LL;
        else
          v11 = 8
              * ((*((unsigned int *)v7 + 6) | ((unsigned __int64)*((unsigned __int8 *)v7 + 32) << 32)) & 0xFFFFFFFFFLL);
        v12 = v11 - 0x98000000000LL;
        v13 = v10 + 2093056;
        v14 = *((unsigned int *)v7 + 7) | ((unsigned __int64)*((unsigned __int8 *)v7 + 33) << 32);
        v42 = v12;
        if ( v13 <= v14 << 12 )
        {
          v42 = v12;
          v15 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        }
        else
        {
          v15 = 8 * (v14 & 0xFFFFFFFFFLL) - 0x98000000000LL;
        }
        v16 = 1;
LABEL_14:
        a3 = v47;
        goto LABEL_15;
      }
    }
  }
}
