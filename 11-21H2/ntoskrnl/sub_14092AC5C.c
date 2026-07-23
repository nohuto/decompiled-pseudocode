/*
 * XREFs of sub_14092AC5C @ 0x14092AC5C
 * Callers:
 *     sub_1406DC120 @ 0x1406DC120 (sub_1406DC120.c)
 * Callees:
 *     PsGetThreadProcess @ 0x1402321F0 (PsGetThreadProcess.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140540280 @ 0x140540280 (sub_140540280.c)
 *     sub_1405402B4 @ 0x1405402B4 (sub_1405402B4.c)
 *     sub_1405402EC @ 0x1405402EC (sub_1405402EC.c)
 *     sub_140540684 @ 0x140540684 (sub_140540684.c)
 *     sub_1405406E8 @ 0x1405406E8 (sub_1405406E8.c)
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_14092B124 @ 0x14092B124 (sub_14092B124.c)
 *     sub_14092B664 @ 0x14092B664 (sub_14092B664.c)
 *     sub_14092B804 @ 0x14092B804 (sub_14092B804.c)
 *     sub_14092C55C @ 0x14092C55C (sub_14092C55C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14092AC5C(__int64 a1, void *a2, unsigned int a3, __int64 a4)
{
  REGHANDLE v4; // r15
  PVOID v5; // r13
  PEPROCESS v6; // r12
  _DWORD *v7; // rsi
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rbx
  int v12; // r14d
  _DWORD *v13; // rax
  __int64 i; // rcx
  unsigned int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rcx
  NTSTATUS v18; // eax
  PEPROCESS ThreadProcess; // rax
  int v20; // eax
  char v21; // al
  void *v22; // rcx
  char v24; // [rsp+40h] [rbp-39h]
  KPROCESSOR_MODE AccessMode; // [rsp+41h] [rbp-38h]
  unsigned int v26; // [rsp+44h] [rbp-35h]
  ULONGLONG RegHandle; // [rsp+48h] [rbp-31h] BYREF
  PVOID Object; // [rsp+50h] [rbp-29h] BYREF
  _QWORD *v29; // [rsp+58h] [rbp-21h]
  __int64 v30; // [rsp+60h] [rbp-19h] BYREF
  _DWORD *v31; // [rsp+68h] [rbp-11h]
  __int64 v32; // [rsp+70h] [rbp-9h]
  __int128 v33; // [rsp+78h] [rbp-1h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v32 = a4;
  v6 = 0LL;
  Object = a2;
  v7 = 0LL;
  RegHandle = 0LL;
  AccessMode = *((_BYTE *)KeGetCurrentThread() + 562);
  v29 = 0LL;
  v33 = 0LL;
  v30 = 0LL;
  LODWORD(v31) = 0;
  if ( !*(_DWORD *)(a1 + 44) || a3 < 0x40000 || (*(_DWORD *)a1 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( (unsigned __int8)sub_14092B664() )
  {
    EtwRegister(&stru_140014F40, 0LL, 0LL, &RegHandle);
    v4 = RegHandle;
    if ( RegHandle )
      sub_1405406E8(RegHandle, 3292);
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1536, 0x4060uLL, 0x504D444Cu);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    v12 = sub_14092C55C(PoolWithTag + 2048, Object, a3, PoolWithTag + 2054);
    if ( v12 >= 0 )
    {
      v12 = sub_14042A5E0(v11 + 2048, *(unsigned int *)(a1 + 4));
      if ( v12 >= 0 )
      {
        sub_1405402EC(v11);
        LODWORD(RegHandle) = 4 * *(_DWORD *)(a1 + 44) + 4;
        v13 = ExAllocatePoolWithTag(PagedPool, (unsigned int)RegHandle, 0x704E534Bu);
        v7 = v13;
        if ( v13 )
        {
          for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 44); i = (unsigned int)(i + 1) )
            v13[i] = -1073741823;
          v13[i] = 1112752980;
        }
        v15 = 0;
        v24 = 1;
        v26 = 0;
        if ( *(_DWORD *)(a1 + 44) )
        {
          do
          {
            v16 = *(_QWORD *)(a1 + 48);
            v17 = *(_DWORD *)(a1 + 40) + v15;
            v33 = 0xC0000001uLL;
            Object = 0LL;
            v18 = ObReferenceObjectByHandle(
                    *(HANDLE *)(v16 + 8 * v17),
                    0x1FFFFFu,
                    (POBJECT_TYPE)PsThreadType,
                    AccessMode,
                    &Object,
                    0LL);
            v5 = Object;
            if ( v18 == -1073741790 || (v24 = 0, v18 < 0) )
            {
              if ( v7 )
                v7[v26] = v18;
              if ( v4 )
              {
                LODWORD(v33) = v18;
                sub_14092B804(v4, &v33);
              }
              v21 = v24;
            }
            else
            {
              if ( !v6 )
              {
                ThreadProcess = PsGetThreadProcess((PETHREAD)Object);
                v6 = ThreadProcess;
                if ( ThreadProcess )
                {
                  ObfReferenceObjectWithTag(ThreadProcess, 0x4C676244u);
                  sub_1405402B4((__int64)v11, (__int64)v6);
                }
              }
              v20 = sub_140540684((__int64)v11, a1, (__int64)v5, (__int64)&v33);
              if ( !v20 )
                v20 = v33;
              if ( v7 )
                v7[v26] = v20;
              sub_14092B124(v11, 2LL, v5);
              if ( v4 )
                sub_14092B804(v4, &v33);
              ObfDereferenceObject(v5);
              v21 = 0;
              v5 = 0LL;
              v24 = 0;
              if ( (_DWORD)v33 == -1073741670 )
                goto LABEL_36;
            }
            v15 = v26 + 1;
            v26 = v15;
          }
          while ( v15 < *(_DWORD *)(a1 + 44) );
          if ( v21 )
            goto LABEL_43;
LABEL_36:
          if ( v6 )
            sub_14092B124(v11, 1LL, v6);
          LODWORD(v30) = *(_DWORD *)(a1 + 44);
          v31 = v7;
          sub_140540280((__int64)v11, (__int64)&v30);
          if ( v7 )
            sub_140540280((__int64)v11, (__int64)v7);
          if ( (int)sub_1405402B4((__int64)v11, (__int64)&unk_140D01858) >= 0 )
            *v29 = &v30;
          v12 = sub_14042A5E0(v11 + 2048, v32);
        }
        else
        {
LABEL_43:
          v12 = -1073741790;
        }
        if ( v6 )
          ObfDereferenceObjectWithTag(v6, 0x4C676244u);
        if ( v5 )
          ObfDereferenceObject(v5);
      }
    }
    v22 = (void *)v11[2052];
    if ( v22 )
      ExFreePoolWithTag(v22, 0x4D574454u);
    if ( v7 )
      ExFreePoolWithTag(v7, 0x704E534Bu);
  }
  else
  {
    v12 = -1073741670;
  }
  if ( v4 )
    EtwUnregister(v4);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x504D444Cu);
  return (unsigned int)v12;
}
