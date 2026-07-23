/*
 * XREFs of sub_14029F6FC @ 0x14029F6FC
 * Callers:
 *     sub_1405ACB84 @ 0x1405ACB84 (sub_1405ACB84.c)
 *     sub_1407B99C0 @ 0x1407B99C0 (sub_1407B99C0.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140281A58 @ 0x140281A58 (sub_140281A58.c)
 *     sub_140281C44 @ 0x140281C44 (sub_140281C44.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 *     sub_140319990 @ 0x140319990 (sub_140319990.c)
 *     sub_140333AA0 @ 0x140333AA0 (sub_140333AA0.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14029F6FC(__int64 a1, unsigned __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r15
  int v10; // edx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  ULONG_PTR v13; // r12
  int v14; // eax
  unsigned __int8 v15; // dl
  __int64 v16; // rcx
  unsigned __int8 v17; // al
  __int64 v18; // rdx
  __int64 result; // rax
  struct _KTHREAD *v20; // rdi
  unsigned int v21; // ecx
  char *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // r9d
  _OWORD v29[3]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+70h] [rbp-90h]
  _QWORD v31[22]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v32[20]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v33[24]; // [rsp+1D0h] [rbp+D0h] BYREF

  memset(v33, 0, 0xB8uLL);
  v30 = 0LL;
  memset(v29, 0, sizeof(v29));
  memset(v32, 0, 0x98uLL);
  memset(v31, 0, sizeof(v31));
  CurrentThread = KeGetCurrentThread();
  v7 = *((_QWORD *)CurrentThread + 23);
  if ( (a3 & 1) != 0 )
  {
    v13 = v7 + 1232;
    v9 = 0LL;
  }
  else
  {
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockExclusiveEx(v7 + 1224, 0LL);
    *((_BYTE *)CurrentThread + 1384) |= 1u;
    if ( (*(_DWORD *)(v7 + 1124) & 0x20) != 0 )
      return sub_140281A58((__int64)CurrentThread, v7);
    v8 = sub_1403126F0(a1);
    v9 = v8;
    if ( !v8 || a2 >> 12 > (*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32)) )
      return sub_140281A58((__int64)CurrentThread, v7);
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockExclusiveEx(v8 + 40, 0LL);
    *((_BYTE *)CurrentThread + 1384) |= 0x80u;
    if ( (*(_DWORD *)(v9 + 48) & 0x200000) == 0
      || !(unsigned int)sub_140319990(v9)
      || (v10 & 0x6200000) == 0x4200000
      || (v11 = *(unsigned int *)(v9 + 52),
          LODWORD(v11) = v11 & 0x7FFFFFFF,
          v12 = v11 | ((unsigned __int64)*(unsigned __int8 *)(v9 + 34) << 31),
          v12 == 0x7FFFFFFFDLL)
      || (v10 & 4) != 0
      || v12 >= 0x7FFFFFFFDLL && v12 != 0x7FFFFFFFELL )
    {
LABEL_32:
      sub_140281C44((__int64)CurrentThread, v9);
      return sub_140281A58((__int64)CurrentThread, v7);
    }
    --*((_WORD *)CurrentThread + 243);
    v13 = v7 + 1232;
    ExAcquirePushLockExclusiveEx(v7 + 1232, 0LL);
  }
  v32[12] = v9;
  v32[2] = v29;
  LODWORD(v32[13]) = 128;
  v14 = sub_140333AA0(v7 + 1664);
  WORD2(v33[0]) = 0;
  LODWORD(v33[0]) = v14;
  v31[2] = v33;
  v17 = BYTE4(v32[13]);
  if ( (v15 & BYTE4(xmmword_140D06900)) != 0 )
    v17 = v15;
  v33[2] = 0LL;
  BYTE4(v32[13]) = v17;
  LODWORD(v33[1]) = 20;
  v33[3] = 0LL;
  BYTE4(v31[0]) = BYTE4(v31[0]) & 0xE3 | 4;
  v31[21] = v32;
  v31[19] = sub_140227360;
  v31[20] = sub_140233B60;
  v31[4] = a1;
  v31[5] = a2;
  LODWORD(v31[0]) = 7;
  HIDWORD(v31[1]) = 0;
  v31[3] = v7 + 1664;
  HIBYTE(v31[0]) = sub_1402CF4F0(v16);
  sub_14030CF90(v31);
  LOBYTE(v18) = HIBYTE(v31[0]);
  result = sub_1402B0CE0(v7 + 1664, v18);
  if ( v9 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13);
    v20 = KeGetCurrentThread();
    if ( v13 - qword_140C50630 < 0x8000000000LL )
      v21 = sub_140287F30(*((_QWORD *)v20 + 23));
    else
      v21 = -1;
    _disable();
    v22 = (char *)v20 + 1696;
    v23 = 0LL;
    v24 = v13 & 0x7FFFFFFFFFFFFFFCLL;
    while ( (*(_QWORD *)v22 & 0x7FFFFFFFFFFFFFFCLL) != v24
         || !v22[18]
         || (*(_DWORD *)v22 & 1) != 0
         || *((_DWORD *)v22 + 2) != v21 )
    {
      v23 = (unsigned int)(v23 + 1);
      v22 += 96;
      if ( (unsigned int)v23 >= 6 )
        goto LABEL_36;
    }
    v22[18] = 0;
    if ( v22 )
    {
      if ( *(__int64 *)v22 < 0 )
      {
        *v22 |= 2u;
        _enable();
        sub_14034EE30(v22, v23, v24);
        _disable();
      }
      v25 = *((_DWORD *)v22 + 22);
      *((_DWORD *)v22 + 22) = 0;
      v22[17] = 0;
      *(_QWORD *)v22 = 0LL;
      *((_BYTE *)v20 + 792) |= 1 << v22[16];
      _enable();
      if ( v25 )
        sub_14022B568((ULONG_PTR)v20, v13, v25);
      goto LABEL_29;
    }
LABEL_36:
    if ( (*((_DWORD *)v20 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v20, v13, v21, 0LL);
    _enable();
LABEL_29:
    if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF
      && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    {
      KiCheckForKernelApcDelivery();
    }
    goto LABEL_32;
  }
  return result;
}
