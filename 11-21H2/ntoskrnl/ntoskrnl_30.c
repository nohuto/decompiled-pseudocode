/*
 * XREFs of ntoskrnl_30 @ 0x140938B40
 * Callers:
 *     <none>
 * Callees:
 *     sub_14025E7A8 @ 0x14025E7A8 (sub_14025E7A8.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MmCreateSection @ 0x14066BF30 (MmCreateSection.c)
 *     sub_1406F3FDC @ 0x1406F3FDC (sub_1406F3FDC.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     MmMapViewOfSection @ 0x140785150 (MmMapViewOfSection.c)
 *     sub_140933A9C @ 0x140933A9C (sub_140933A9C.c)
 */

__int64 __fastcall ntoskrnl_30(__int64 *a1, unsigned int a2, unsigned __int64 a3, unsigned int a4, _OWORD *Address)
{
  unsigned __int8 v7; // r8
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r13d
  unsigned int v12; // r14d
  char v13; // dl
  unsigned int v14; // r15d
  char v15; // cl
  int v16; // esi
  char *v17; // rdi
  unsigned __int64 v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // [rsp+20h] [rbp-E8h]
  PVOID Object; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v23; // [rsp+60h] [rbp-A8h]
  __int128 v24; // [rsp+68h] [rbp-A0h]
  int v25; // [rsp+78h] [rbp-90h]
  unsigned __int64 v26; // [rsp+80h] [rbp-88h] BYREF
  __int64 v27; // [rsp+88h] [rbp-80h] BYREF
  __int64 v28; // [rsp+90h] [rbp-78h] BYREF
  __int64 v29; // [rsp+98h] [rbp-70h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v32; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v33; // [rsp+C0h] [rbp-48h]
  __int128 v34; // [rsp+D0h] [rbp-38h]
  unsigned __int8 v36; // [rsp+118h] [rbp+10h]

  v24 = 0LL;
  v25 = 0;
  v32 = 0LL;
  v33 = 0LL;
  *(_QWORD *)&v34 = 0LL;
  DWORD2(v34) = 0;
  v23 = 0LL;
  v26 = 0LL;
  Object = 0LL;
  v7 = *((_BYTE *)KeGetCurrentThread() + 562);
  v36 = v7;
  if ( a2 < 0x14 )
    return 3221225712LL;
  if ( a4 < 0x30 )
    return 3221225507LL;
  if ( v7 )
  {
    v9 = a3 + a2;
    v10 = 0x7FFFFFFF0000LL;
    if ( v9 > 0x7FFFFFFF0000LL || v9 < a3 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v10 = (__int64)a1;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    ProbeForWrite(Address, a4, 1u);
    v7 = v36;
  }
  v24 = *(_OWORD *)a3;
  v25 = *(_DWORD *)(a3 + 16);
  v11 = v24;
  if ( (unsigned int)(v24 - 1) > 1 )
    return 3225812995LL;
  if ( !DWORD1(v24) )
  {
    v12 = DWORD1(v24) + 32;
LABEL_15:
    v13 = -1;
    goto LABEL_16;
  }
  v12 = 8;
  if ( DWORD1(v24) < 8 )
    goto LABEL_15;
  if ( DWORD1(v24) > 0x10000 )
    return 3225812996LL;
  v12 = DWORD1(v24);
  if ( ((DWORD1(v24) - 1) & DWORD1(v24)) == 0 )
    goto LABEL_15;
  v13 = -1;
  v15 = -1;
  do
  {
    ++v15;
    v12 >>= 1;
  }
  while ( v12 );
  v12 = 1 << (v15 + 1);
LABEL_16:
  v14 = DWORD2(v24);
  if ( DWORD2(v24) > 0x20000 )
    return 3225812997LL;
  if ( DWORD2(v24) <= 2 * v12 )
  {
    v14 = 2 * v12;
  }
  else if ( ((DWORD2(v24) - 1) & DWORD2(v24)) != 0 )
  {
    if ( DWORD2(v24) )
    {
      do
      {
        ++v13;
        v14 >>= 1;
      }
      while ( v14 );
    }
    v14 = 1 << (v13 + 1);
  }
  if ( HIDWORD(v24) )
    return 3225812993LL;
  LODWORD(v32) = 48;
  *((_QWORD *)&v32 + 1) = 0LL;
  DWORD2(v33) = 0;
  *(_QWORD *)&v33 = 0LL;
  v34 = 0LL;
  v16 = sub_14072B3B0(0, ntoskrnl_29, (int)&v32, v7, v21, 208, 0, 0, &Object, 0LL);
  if ( v16 < 0 )
    goto LABEL_43;
  v17 = (char *)Object;
  memset(Object, 0, 0xD0uLL);
  *(_DWORD *)v17 = 13631502;
  *((_DWORD *)v17 + 2) = v11;
  *((_DWORD *)v17 + 5) = v12;
  *((_DWORD *)v17 + 7) = v14;
  *(_QWORD *)(v17 + 12) = 0LL;
  *((_DWORD *)v17 + 6) = v12 - 1;
  *((_DWORD *)v17 + 8) = v14 - 1;
  *((_QWORD *)v17 + 13) = 0LL;
  KeInitializeEvent((PRKEVENT)(v17 + 136), SynchronizationEvent, 0);
  v18 = (88LL * v12 + 111) & 0xFFFFFFFFFFFFFFF8uLL;
  v26 = v18 + 8 * (v14 + 2 * (v14 + 2LL));
  v23 = (__int64 *)(v17 + 56);
  v16 = MmCreateSection((int)v17 + 56, 6LL, 0, &v26, 4, 0x8000000, 0LL, 0LL);
  if ( v16 >= 0 )
  {
    v19 = *((_QWORD *)v17 + 7);
    v31 = 0LL;
    v16 = sub_1406F3FDC(v19, (_QWORD *)v17 + 8, (unsigned __int64 *)v17 + 11, &v31, 0LL, 0LL);
    if ( v16 >= 0 )
    {
      v16 = sub_140933A9C(
              (void *)(v18 + *((_QWORD *)v17 + 8)),
              *((_DWORD *)v17 + 22) - (int)v18,
              (__int64)(v17 + 80),
              (__int64)(v17 + 72),
              (struct _MDL **)v17 + 9,
              (_QWORD *)v17 + 10);
      if ( v16 >= 0 )
      {
        if ( !v36 )
          goto LABEL_40;
        v29 = 0LL;
        v28 = 0LL;
        v27 = 0LL;
        v16 = MmMapViewOfSection(
                *v23,
                *((_QWORD *)KeGetCurrentThread() + 23),
                &v29,
                0LL,
                0LL,
                (unsigned int *)&v28,
                &v27,
                1,
                0,
                4);
        if ( v16 >= 0 )
        {
          v20 = v18 + v29;
          v17 = (char *)Object;
          *((_QWORD *)Object + 5) = v29;
          *((_QWORD *)v17 + 6) = v20;
LABEL_40:
          v30 = 0LL;
          v16 = sub_140729C30(v17, 0LL, 0, 1, 0, (__int64)&Object, &v30);
          if ( v16 >= 0 )
          {
            *a1 = v30;
            v17 = (char *)Object;
            *Address = *(_OWORD *)((char *)Object + 8);
            Address[1] = *(_OWORD *)(v17 + 24);
            Address[2] = *(_OWORD *)(v17 + 40);
          }
          else
          {
            v17 = 0LL;
            Object = 0LL;
          }
          goto LABEL_44;
        }
LABEL_43:
        v17 = (char *)Object;
      }
    }
  }
LABEL_44:
  if ( v17 )
    ObfDereferenceObject(v17);
  return (unsigned int)v16;
}
