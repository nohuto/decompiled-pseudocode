/*
 * XREFs of sub_1406CDFAC @ 0x1406CDFAC
 * Callers:
 *     sub_1406CDD90 @ 0x1406CDD90 (sub_1406CDD90.c)
 *     ExRaiseHardError @ 0x140A02230 (ExRaiseHardError.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042B7A0 @ 0x14042B7A0 (sub_14042B7A0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     LpcSendWaitReceivePort @ 0x1406CE2B0 (LpcSendWaitReceivePort.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_14079FFE8 @ 0x14079FFE8 (sub_14079FFE8.c)
 */

__int64 __fastcall sub_1406CDFAC(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        __int64 a5,
        int a6,
        unsigned int *a7)
{
  __int64 v9; // r8
  _DWORD *v10; // r15
  KPROCESSOR_MODE v11; // di
  unsigned int v12; // ebx
  unsigned int v13; // edx
  char v14; // dl
  __int64 v15; // r10
  int v16; // r11d
  void *v17; // rdi
  char v18; // si
  unsigned int v19; // r15d
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v22; // rax
  bool v23; // zf
  int v24; // eax
  int v25; // r14d
  __int64 v28; // [rsp+60h] [rbp-318h] BYREF
  void *Src; // [rsp+68h] [rbp-310h]
  unsigned int *v30; // [rsp+70h] [rbp-308h]
  _DWORD v31[12]; // [rsp+80h] [rbp-2F8h] BYREF
  __int64 v32; // [rsp+B0h] [rbp-2C8h]
  int v33; // [rsp+B8h] [rbp-2C0h]
  unsigned int v34; // [rsp+BCh] [rbp-2BCh]
  unsigned int v35; // [rsp+C0h] [rbp-2B8h]
  unsigned int v36; // [rsp+C4h] [rbp-2B4h]
  char v37[616]; // [rsp+C8h] [rbp-2B0h] BYREF

  Src = a4;
  v28 = (__int64)a4;
  v30 = a7;
  v10 = sub_140347DB0();
  v11 = *((_BYTE *)KeGetCurrentThread() + 562);
  v12 = 0;
  *a7 = 0;
  if ( v13 > 0x4D )
    return 3221225485LL;
  v14 = 0;
  if ( a6 == 6 )
  {
    if ( !SeSinglePrivilegeCheck(stru_140D3CAB8, v11) )
      return 3221225569LL;
    if ( !PsIsCurrentThreadInServerSilo() )
      byte_140C5B134 = 0;
    v10[224] = 2;
    v14 = 1;
    v9 = a3;
  }
  v15 = *((_QWORD *)KeGetCurrentThread() + 23);
  v16 = *((_DWORD *)KeGetCurrentThread() + 344) & 0x10;
  if ( !v16 && (a1 & 0xC0000000) == 0xC0000000 && (!v10[224] || v14) )
  {
    sub_14042B7A0(a1, a2, v9, a5, v11 != 0);
    return 0LL;
  }
  if ( v15 == *((_QWORD *)v10 + 110) )
  {
    if ( (a1 & 0xC0000000) == 0xC0000000 )
      sub_14042B7A0(a1, a2, v9, a5, v11 != 0);
    goto LABEL_15;
  }
  v17 = 0LL;
  v18 = 0;
  if ( !v16 && ((*(_BYTE *)(v15 + 1528) & 1) != 0 || (a1 & 0x10000000) != 0) )
  {
    v17 = (void *)sub_14079FFE8(v15);
    if ( v17 )
      v18 = 1;
    else
      v17 = (void *)*((_QWORD *)v10 + 111);
  }
  if ( v17
    && ((CurrentThread = KeGetCurrentThread(), (*((_DWORD *)CurrentThread + 29) & 0x400) == 0)
     && *((_BYTE *)CurrentThread + 586) != 1
      ? (v22 = *((_QWORD *)CurrentThread + 30))
      : (v22 = 0LL),
        v22) )
  {
    v23 = (*(_BYTE *)(v22 + 5808) & 0x10) == 0;
    v24 = 0;
    if ( !v23 )
      v24 = -1073741823;
    v19 = a3;
    if ( v24 < 0 )
    {
      if ( v18 == 1 )
        ObfDereferenceObject(v17);
      v17 = 0LL;
    }
  }
  else
  {
    v19 = a3;
  }
  if ( !v17 )
  {
LABEL_15:
    *a7 = 0;
    return 0LL;
  }
  v31[0] = 7340104;
  v31[1] = 9;
  v31[10] = a1 & 0xEFFFFFFF;
  v33 = a6;
  v36 = v19;
  v35 = a2;
  if ( Src )
    memmove(v37, Src, 8LL * a2);
  v32 = MEMORY[0xFFFFF78000000014];
  v28 = 688LL;
  v25 = LpcSendWaitReceivePort((_DWORD)v17, 0x20000, (unsigned int)v31, (unsigned int)v31, (__int64)&v28, 0LL);
  if ( v18 == 1 )
    ObfDereferenceObject(v17);
  if ( v25 >= 0 )
  {
    if ( v34 <= 0xA )
      v12 = v34;
    *a7 = v12;
  }
  return (unsigned int)v25;
}
