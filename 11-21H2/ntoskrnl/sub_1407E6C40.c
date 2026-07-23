/*
 * XREFs of sub_1407E6C40 @ 0x1407E6C40
 * Callers:
 *     sub_1407E6840 @ 0x1407E6840 (sub_1407E6840.c)
 *     NtAllocateVirtualMemory @ 0x1407E69E0 (NtAllocateVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     PoRegisterDeviceNotify @ 0x140372920 (PoRegisterDeviceNotify.c)
 *     sub_1406FB478 @ 0x1406FB478 (sub_1406FB478.c)
 *     sub_1406FC9C4 @ 0x1406FC9C4 (sub_1406FC9C4.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_1407E71E0 @ 0x1407E71E0 (sub_1407E71E0.c)
 */

__int64 __fastcall sub_1407E6C40(
        ULONG_PTR a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        char a8,
        unsigned int a9,
        int a10,
        __int64 a11,
        __int64 a12,
        PVOID *a13)
{
  __int64 v13; // rbx
  unsigned __int64 v15; // rsi
  _QWORD *v16; // rax
  unsigned int v17; // ebp
  unsigned int v18; // r12d
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  int v22; // r10d
  int v23; // r11d
  int v24; // r14d
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // r10d
  int v29; // r8d
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // rcx
  __int64 v32; // r11
  unsigned __int64 v33; // r8
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // r8
  __int64 v37; // r10
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // rcx
  int v40; // esi
  unsigned int v41; // edx
  char v42; // al
  PVOID *v43; // rax
  __int64 result; // rax
  __int64 v45; // rax
  bool v46; // zf
  bool v47; // zf
  __int64 v48; // rcx
  __int64 v49; // [rsp+40h] [rbp-68h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  _QWORD *v51; // [rsp+50h] [rbp-58h]
  __int64 v52; // [rsp+58h] [rbp-50h]
  unsigned __int64 v53; // [rsp+60h] [rbp-48h]
  int v54; // [rsp+B8h] [rbp+10h]
  __int64 v55; // [rsp+C0h] [rbp+18h] BYREF

  v55 = a3;
  v13 = a12;
  v53 = a2;
  v15 = a2;
  v52 = 0LL;
  v16 = (_QWORD *)*((_QWORD *)KeGetCurrentThread() + 23);
  v51 = v16;
  *(_QWORD *)(a12 + 96) = v16;
  Object = 0LL;
  if ( a1 != -1LL )
  {
    v24 = sub_140732D40(a1, 8, (__int64)PsProcessType, a8, 0x6D566D4Du, &Object, 0LL, 0LL);
    if ( v24 < 0 )
      goto LABEL_88;
    v16 = Object;
    v51 = Object;
  }
  v17 = a5;
  v18 = a6 & 0xFFF807FF;
  v19 = a9;
  v20 = a6 & 0xFFF807FF;
  v54 = a6 & 0x7F800;
  v21 = a5;
  *(_QWORD *)(v13 + 88) = v16;
  *(_QWORD *)(v13 + 32) = a4;
  v24 = sub_1407E71E0(v21, v19, v20);
  if ( v24 >= 0 )
  {
    if ( !v22 || (v24 = PoRegisterDeviceNotify(), v24 >= 0) )
    {
      if ( (v17 & 0x1000) != 0 && !v15 )
        v17 |= 0x2000u;
      v25 = a7;
      if ( *(_QWORD *)(a7 + 24)
        && (v17 & 0x20400000) != 0x20000000
        && ((v17 & 0x20400000) != 0x20400000 || (*(_BYTE *)(a7 + 56) & 2) == 0) )
      {
        goto LABEL_75;
      }
      v26 = *(_QWORD *)(a7 + 56);
      if ( (v26 & 0x20) != 0 )
        goto LABEL_75;
      if ( (v18 & 0xF0) != 0 )
        *(_DWORD *)(v13 + 60) |= 8u;
      if ( (v18 & 0x40000000) != 0 )
      {
        if ( (v18 & 0xF0) == 0 )
          goto LABEL_75;
        v23 = 2;
        v18 &= ~0x40000000u;
        v52 = 2LL;
      }
      if ( (v26 & 0x40) != 0 )
      {
        if ( (v18 & 0xF0) == 0 )
          goto LABEL_75;
        v52 = v23 | 8u;
      }
      v27 = 0x10000LL;
      v28 = v17 & 0x20400000;
      v49 = 0x10000LL;
      if ( (v17 & 0x20400000) == 0x20000000 )
      {
        v27 = 0x200000LL;
        v49 = 0x200000LL;
      }
      v29 = v26 & 0x1A;
      LODWORD(a12) = v29;
      if ( (v26 & 0x1A) != 0 )
      {
        if ( ((v29 - 1) & v29) != 0 )
          goto LABEL_75;
        if ( (v29 & 2) != 0 )
        {
          v46 = v28 == 541065216;
        }
        else
        {
          if ( (v29 & 0x10) != 0 )
          {
            if ( !_bittest64(&qword_140D068D8, 0x25u) )
            {
              v24 = -1073741637;
              goto LABEL_88;
            }
            v27 = 0x40000000LL;
          }
          else if ( (v29 & 8) != 0 )
          {
            v27 = 0x200000LL;
          }
          v49 = v27;
          v46 = v28 == 0x20000000;
        }
        if ( v46 )
          goto LABEL_18;
        if ( v28 != 0x400000 )
          goto LABEL_75;
      }
      else
      {
        if ( (v26 & 4) != 0 )
          goto LABEL_75;
        if ( v28 != 0x400000 )
        {
LABEL_18:
          if ( ((v17 & 0x2000) == 0 || v15) && (*(_QWORD *)v25 || *(_QWORD *)(v25 + 8) || *(_QWORD *)(v25 + 16)) )
            goto LABEL_75;
          if ( v55 )
          {
            v24 = sub_1406FB478((ULONGLONG *)&v55);
            if ( v24 < 0 )
              goto LABEL_88;
            if ( (v17 & 0x2000) != 0 && !v15 )
              *(_QWORD *)(v25 + 8) = sub_1406FC9C4((__int64)v51, v55);
            v28 = v17 & 0x20400000;
            v29 = a12;
          }
          if ( (v17 & 0x40000) != 0 )
          {
            *(_DWORD *)(v13 + 64) |= 0x8000000u;
            if ( (v17 & 0x4000) == 0 )
              goto LABEL_25;
          }
          else
          {
            if ( (v17 & 0x4000) == 0 )
            {
LABEL_25:
              if ( (v17 & 0x2000) == 0 )
              {
                v30 = 4096LL;
                goto LABEL_27;
              }
              if ( (v17 & 0x40000000) == 0 )
                goto LABEL_54;
              if ( ((v28 - 0x20000000) & 0xFFBFFFFF) == 0 )
                goto LABEL_75;
              v30 = 4096LL;
              goto LABEL_27;
            }
            if ( *(_QWORD *)v25 || *(_QWORD *)(v25 + 8) || *(_QWORD *)(v25 + 16) )
              goto LABEL_75;
            *(_DWORD *)(v13 + 64) |= 0x4000000u;
          }
          if ( v29 || v28 == 0x20000000 )
          {
LABEL_54:
            v30 = v49;
            goto LABEL_27;
          }
          v30 = 4096LL;
LABEL_27:
          v31 = *(_QWORD *)(v25 + 16);
          if ( v31 )
          {
            if ( v31 < v30
              || ((v31 - 1) & v31) != 0
              || v31 >= 0x7FFFFFFF0000LL
              || (v17 & 0x40000000) != 0 && v31 != 4096 )
            {
              goto LABEL_75;
            }
          }
          else
          {
            *(_QWORD *)(v25 + 16) = v30;
          }
          if ( !a4
            || (v17 & 0x2000) != 0
            && ((v28 - 0x20000000) & 0xFFBFFFFF) == 0
            && (v28 != 541065216 && (v17 & 0x1000) == 0 && !v29 || ((v30 - 1) & a4) != 0) )
          {
            goto LABEL_75;
          }
          v32 = 0x7FFFFFFEFFFFLL;
          if ( v15 > 0x7FFFFFFEFFFFLL || 0x7FFFFFFF0000LL - v15 < a4 )
            goto LABEL_75;
          v33 = v15 + a4;
          if ( (v17 & 0x2000) == 0 )
          {
            if ( v17 == 0x80000 || v17 == 0x1000000 )
            {
              v45 = ~(v30 - 1);
              v15 = v45 & (v30 + v15 - 1);
              v33 &= v45;
              if ( v15 >= v33 )
              {
                v24 = -1073741800;
                goto LABEL_88;
              }
            }
            else
            {
              v34 = ~(v30 - 1);
              v15 &= v34;
              v33 = v34 & (v30 + v33 - 1);
            }
LABEL_37:
            v35 = v53;
            v36 = v33 - v15;
            if ( v53 )
              *(_QWORD *)v25 = v15;
            else
              v15 = *(_QWORD *)v25;
            v37 = *(_QWORD *)(v25 + 16);
            v38 = v15;
            if ( ((v37 - 1) & v15) == 0 )
            {
              v39 = *(_QWORD *)(v25 + 8);
              if ( v39 )
              {
                if ( v39 <= 0x7FFFFFFEFFFFLL )
                {
                  v38 = v15;
                  if ( (((_WORD)v39 + 1) & 0xFFF) == 0 )
                    goto LABEL_44;
                }
              }
              else
              {
                if ( (v17 & 0x2000) != 0 && !v35 && (v17 & 0x4000) == 0 )
                {
                  if ( (unsigned __int64)(v51[187] - 1LL) < 0x7FFFFFFEFFFFLL )
                    v32 = v51[187] - 1LL;
                  v40 = a12;
                  v39 = v32;
                  *(_QWORD *)(v25 + 8) = v32;
                  if ( v40 && (v40 & 2) == 0 )
                  {
                    if ( (v40 & 8) != 0 )
                    {
                      v48 = -2097152LL;
LABEL_138:
                      v39 = (v32 & v48) - 1;
                      *(_QWORD *)(v25 + 8) = v39;
                      goto LABEL_45;
                    }
                    if ( (v40 & 0x10) != 0 )
                    {
                      v48 = -1073741824LL;
                      goto LABEL_138;
                    }
                  }
LABEL_45:
                  if ( v38 < v39 && v39 - v38 + 1 >= v36 && (v17 & 0x7F) == 0 )
                  {
                    v41 = *(_DWORD *)(v25 + 32);
                    if ( v41 <= (unsigned __int16)word_140D05000 )
                    {
                      v42 = *(_BYTE *)(v25 + 49);
                      if ( !v42 || v40 || (v17 & 0x20400000) == 0x20000000 )
                      {
                        *(_BYTE *)(v13 + 56) = v42;
                        *(_BYTE *)(v13 + 57) = a8;
                        *(_DWORD *)(v13 + 64) |= a9;
                        *(_DWORD *)(v13 + 68) = a10;
                        *(_QWORD *)(v13 + 72) = a11;
                        *(_QWORD *)(v13 + 104) = *(_QWORD *)(v25 + 40);
                        *(_QWORD *)(v13 + 112) = *(_QWORD *)(v25 + 56);
                        *(_DWORD *)(v13 + 120) = v52;
                        v43 = a13;
                        *(_QWORD *)(v13 + 8) = v39;
                        *(_DWORD *)(v13 + 48) = v54;
                        *v43 = Object;
                        result = 0LL;
                        *(_QWORD *)v13 = v38;
                        *(_QWORD *)(v13 + 16) = v37;
                        *(_QWORD *)(v13 + 24) = v36;
                        *(_DWORD *)(v13 + 40) = v17 & 0xFFFBBFFF;
                        *(_DWORD *)(v13 + 44) = v18;
                        *(_DWORD *)(v13 + 52) = v41;
                        return result;
                      }
                    }
                  }
                  goto LABEL_75;
                }
                if ( v15 + v36 >= v15 )
                {
                  v39 = v15 + v36 - 1;
                  *(_QWORD *)(v25 + 8) = v39;
                  if ( v39 <= 0x7FFFFFFEFFFFLL )
                  {
LABEL_44:
                    v40 = a12;
                    goto LABEL_45;
                  }
                }
              }
            }
LABEL_75:
            v24 = -1073741811;
            goto LABEL_88;
          }
          if ( (v17 & 0x40000000) != 0 )
          {
            v47 = (((unsigned __int16)v15 | (unsigned __int16)a4) & 0xFFF) == 0;
          }
          else
          {
            if ( (v17 & 0x4000) == 0 )
            {
              v15 &= -(__int64)v30;
              if ( ((v28 - 0x20000000) & 0xFFBFFFFF) != 0 )
                v33 = (v33 + 4095) & 0xFFFFFFFFFFFFF000uLL;
              else
                v33 = v15 + a4;
              goto LABEL_37;
            }
            v47 = ((a4 | v15) & (v30 - 1)) == 0;
          }
          if ( !v47 )
            goto LABEL_75;
          goto LABEL_37;
        }
      }
      if ( (v26 & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
        goto LABEL_75;
      goto LABEL_18;
    }
  }
LABEL_88:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  return (unsigned int)v24;
}
