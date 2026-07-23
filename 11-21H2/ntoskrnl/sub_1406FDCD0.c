/*
 * XREFs of sub_1406FDCD0 @ 0x1406FDCD0
 * Callers:
 *     sub_1406FD4A0 @ 0x1406FD4A0 (sub_1406FD4A0.c)
 * Callees:
 *     sub_140229FF0 @ 0x140229FF0 (sub_140229FF0.c)
 *     sub_14023AFD8 @ 0x14023AFD8 (sub_14023AFD8.c)
 *     sub_14023E9A0 @ 0x14023E9A0 (sub_14023E9A0.c)
 *     sub_14023F590 @ 0x14023F590 (sub_14023F590.c)
 *     sub_14025C884 @ 0x14025C884 (sub_14025C884.c)
 *     sub_140276A48 @ 0x140276A48 (sub_140276A48.c)
 *     sub_140287574 @ 0x140287574 (sub_140287574.c)
 *     sub_1402879F8 @ 0x1402879F8 (sub_1402879F8.c)
 *     sub_140287C5C @ 0x140287C5C (sub_140287C5C.c)
 *     sub_140287C84 @ 0x140287C84 (sub_140287C84.c)
 *     IoSetTopLevelIrp @ 0x140288140 (IoSetTopLevelIrp.c)
 *     IoGetTopLevelIrp @ 0x140288160 (IoGetTopLevelIrp.c)
 *     sub_14028AE3C @ 0x14028AE3C (sub_14028AE3C.c)
 *     sub_1402A4094 @ 0x1402A4094 (sub_1402A4094.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_14030EC14 @ 0x14030EC14 (sub_14030EC14.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_1403606EC @ 0x1403606EC (sub_1403606EC.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406F914C @ 0x1406F914C (sub_1406F914C.c)
 *     sub_1406FE0E4 @ 0x1406FE0E4 (sub_1406FE0E4.c)
 *     sub_1406FE8F4 @ 0x1406FE8F4 (sub_1406FE8F4.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407F854C @ 0x1407F854C (sub_1407F854C.c)
 */

__int64 __fastcall sub_1406FDCD0(__int64 a1)
{
  int v2; // esi
  char v3; // r13
  int v4; // eax
  __int64 v5; // r14
  KPROCESSOR_MODE v6; // r9
  __int64 v7; // rax
  NTSTATUS v8; // eax
  __int64 **v9; // rbp
  int v10; // edi
  __int64 *v11; // rax
  struct _KTHREAD *CurrentThread; // r14
  int v13; // r8d
  int v14; // eax
  __int64 v15; // r15
  __int64 *v16; // r12
  int v18; // ecx
  __int64 *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  char v22; // dl
  int v23; // ecx
  int v24; // ecx
  bool v25; // zf
  __int64 *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 *v31; // rcx
  _QWORD v32[16]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+F0h] [rbp+8h] BYREF
  __int64 *v34; // [rsp+F8h] [rbp+10h] BYREF
  PVOID Object; // [rsp+100h] [rbp+18h] BYREF

  v34 = 0LL;
  v33 = 0LL;
  memset(v32, 0, sizeof(v32));
  v2 = 0;
  v3 = 1;
  if ( *(_BYTE *)(a1 + 192) )
    return 3221225716LL;
  v4 = *(_DWORD *)(a1 + 16);
  if ( (v4 & 0x80000) != 0 )
    return 3221225716LL;
  v5 = *(_QWORD *)(a1 + 48);
  if ( v5 )
  {
    v9 = *(__int64 ***)(a1 + 48);
    goto LABEL_7;
  }
  if ( (v4 & 0x80020000) == 0 )
  {
    v6 = *(_BYTE *)(a1 + 72);
    v7 = *(_DWORD *)(a1 + 32) & 7;
    Object = 0LL;
    v8 = ObReferenceObjectByHandle(
           *(HANDLE *)(a1 + 40),
           *((_DWORD *)qword_140015E40 + v7),
           (POBJECT_TYPE)IoFileObjectType,
           v6,
           &Object,
           0LL);
    v9 = (__int64 **)Object;
    v10 = v8;
    if ( v8 < 0 )
    {
LABEL_28:
      if ( v10 != -1073740682 )
        goto LABEL_29;
      goto LABEL_79;
    }
    v2 = 1;
    if ( !*((_QWORD *)Object + 5) )
    {
      v10 = -1073741792;
      goto LABEL_30;
    }
LABEL_7:
    v11 = (__int64 *)sub_140287C5C((__int64)v9);
    if ( v11 )
    {
      if ( !sub_1403606EC(*v11) )
      {
        v10 = -1073740640;
        goto LABEL_29;
      }
      *(_QWORD *)(a1 + 176) = v30;
      if ( (*(_DWORD *)(v29 + 8) & 1) != 0 )
        *(_DWORD *)a1 |= 0x1000000u;
    }
    if ( !v5 )
    {
      ObfReferenceObject(v9);
      ++v2;
LABEL_10:
      *(_QWORD *)(a1 + 56) = v9;
      LODWORD(v32[7]) = 2;
      if ( v9 )
        v32[8] = v9;
      else
        v32[8] = 0LL;
      if ( (*(_DWORD *)(a1 + 16) & 0x1000000) != 0 )
      {
        if ( (*(_DWORD *)a1 & 0x400) != 0 && !sub_1402A4094((__int64)v9) )
        {
          v10 = -1073741790;
          goto LABEL_29;
        }
        sub_14023AFD8((__int64)v9);
        if ( (*(_DWORD *)a1 & 0x400) != 0 )
        {
          v22 = *(_BYTE *)(a1 + 24);
          if ( (v22 & 0x10) != 0 )
          {
            v23 = *(_DWORD *)a1 | 0x10;
            *(_DWORD *)a1 = v23;
            if ( (v22 & 0x30) == 0x30 )
              *(_DWORD *)a1 = v23 | 0x1000;
            *(_BYTE *)(a1 + 24) = v22 & 0xF;
          }
        }
        v3 = 2;
      }
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      while ( 1 )
      {
        v10 = sub_1406FE0E4(a1);
        if ( v10 < 0 )
          goto LABEL_27;
        v13 = *(_DWORD *)a1;
        if ( (*(_DWORD *)a1 & 0x10000) != 0 && (*(_DWORD *)(a1 + 16) & 0x1000000) != 0 && (*(_DWORD *)a1 & 0x20000) == 0 )
        {
          v31 = v9[5];
          if ( *v31 )
          {
            sub_14023E9A0(v31, 1, 1);
            v13 = *(_DWORD *)a1;
          }
        }
        if ( (v13 & 1) == 0 )
        {
          *(_QWORD *)(a1 + 184) = IoGetTopLevelIrp();
          IoSetTopLevelIrp((PIRP)1);
          *(_DWORD *)a1 |= 2u;
        }
        v14 = sub_140287C84(a1, (__int64)v32, &v33);
        v10 = v14;
        if ( v14 >= 0 )
          break;
        if ( v14 == -1073740277 )
        {
          sub_1402AC800((__int64)CurrentThread);
          goto LABEL_29;
        }
        if ( v14 == -1073740682 )
        {
          sub_1402AC800((__int64)CurrentThread);
          goto LABEL_79;
        }
      }
      v15 = v33;
      *(_QWORD *)(a1 + 64) = v33;
      if ( (*(_DWORD *)(v15 + 56) & 2) != 0 )
      {
        v10 = sub_1406F914C(a1, &v34);
        if ( v10 < 0 )
        {
          if ( v34 )
          {
            v15 = *v34;
            v33 = v15;
            *(_QWORD *)(a1 + 64) = v15;
          }
          v16 = (__int64 *)sub_14025C884((__int64)v9, v15, *(_DWORD *)(a1 + 16));
          --v2;
          if ( (_QWORD *)v15 == v32 )
          {
            ObfDereferenceObject(v9);
            v9 = (__int64 **)sub_140276A48((volatile __int64 *)(v15 + 64), 0LL);
          }
          else
          {
            _InterlockedIncrement64((volatile signed __int64 *)(sub_14030EC14(v15) + 1352));
            sub_140287574(v33, 1u);
          }
          sub_1402879F8(v16);
        }
        else
        {
          v21 = *v34;
          *(_QWORD *)(a1 + 64) = *v34;
          _InterlockedIncrement64((volatile signed __int64 *)(sub_14030EC14(v21) + 1352));
          v2 -= 2;
        }
LABEL_27:
        sub_1402AC800((__int64)CurrentThread);
        goto LABEL_28;
      }
      sub_1402AC800((__int64)CurrentThread);
      v10 = sub_1406FE8F4(a1);
      if ( v10 >= 0 )
      {
        --v2;
        goto LABEL_29;
      }
      sub_1407F854C(a1);
      goto LABEL_28;
    }
    v18 = *(_DWORD *)(a1 + 16) & 0x1000000;
    if ( v18 )
    {
      if ( (*(_DWORD *)a1 & 1) != 0 )
      {
        v10 = -1073741580;
        goto LABEL_29;
      }
      if ( *(_QWORD *)(a1 + 152) )
      {
        v10 = -1073741582;
        goto LABEL_29;
      }
    }
    v19 = *(__int64 **)(v5 + 40);
    if ( !v19 )
    {
      v10 = -1073741792;
      goto LABEL_29;
    }
    v20 = *(_QWORD *)(a1 + 8);
    if ( v20 && (*(_DWORD *)(v20 + 24) & 0x200) != 0 )
    {
      *(_BYTE *)(a1 + 72) = 0;
      v19 = *(__int64 **)(v5 + 40);
    }
    if ( v18 )
      v19 += 2;
    v10 = -1073741823;
    v33 = *v19;
    if ( !v33 || (v10 = sub_14023F590(a1), v10 < 0) )
    {
      sub_140229FF0((ULONG_PTR)v9, 2);
      v2 += 2;
      if ( v10 == -1073740682 )
      {
LABEL_79:
        if ( (*(_DWORD *)a1 & 1) == 0 )
          sub_14023AFD8((__int64)v9);
        if ( (unsigned int)sub_14023E9A0(v9[5], v3, 0) > 1 && (*(_DWORD *)a1 & 0x2000000) != 0 )
        {
          ++dword_140C52950;
          v10 = -1073740277;
        }
LABEL_29:
        if ( !v2 )
          return (unsigned int)v10;
LABEL_30:
        sub_14028AE3C((ULONG_PTR)v9);
        return (unsigned int)v10;
      }
      goto LABEL_10;
    }
    v24 = *(_DWORD *)a1 | 4;
    v25 = (*(_DWORD *)(a1 + 16) & 0x1000000) == 0;
    *(_DWORD *)a1 = v24;
    v26 = *(__int64 **)(v5 + 40);
    if ( v25 )
    {
      v27 = *v26;
      v28 = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 128) = v28;
      v33 = v27;
      if ( (v24 & 1) != 0 || v28 )
        goto LABEL_55;
    }
    else
    {
      v27 = v26[2];
      v33 = v27;
    }
    *(_QWORD *)(a1 + 128) = _InterlockedCompareExchange64(
                              (volatile signed __int64 *)(*(_QWORD *)v27 + 24LL),
                              -1LL,
                              -1LL);
    v27 = v33;
LABEL_55:
    *(_QWORD *)(a1 + 64) = v27;
    goto LABEL_29;
  }
  return 3221225716LL;
}
