/*
 * XREFs of sub_1409F3EC0 @ 0x1409F3EC0
 * Callers:
 *     sub_1409DEFB8 @ 0x1409DEFB8 (sub_1409DEFB8.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406D75F4 @ 0x1406D75F4 (sub_1406D75F4.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_1409EE768 @ 0x1409EE768 (sub_1409EE768.c)
 *     sub_1409F21D0 @ 0x1409F21D0 (sub_1409F21D0.c)
 *     sub_1409F28D4 @ 0x1409F28D4 (sub_1409F28D4.c)
 *     sub_1409F352C @ 0x1409F352C (sub_1409F352C.c)
 *     sub_1409F36F4 @ 0x1409F36F4 (sub_1409F36F4.c)
 *     sub_1409F39DC @ 0x1409F39DC (sub_1409F39DC.c)
 */

__int64 __fastcall sub_1409F3EC0(_OWORD *Address, SIZE_T Length, KPROCESSOR_MODE AccessMode)
{
  SIZE_T v4; // r15
  _OWORD *v5; // r14
  char *v6; // rsi
  int v7; // edi
  __int64 v8; // r13
  _OWORD *v9; // rax
  _OWORD *v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // r8d
  unsigned int v13; // r11d
  unsigned int v14; // r11d
  unsigned int v15; // r8d
  char v16; // cl
  unsigned int v17; // r8d
  unsigned int v18; // r9d
  unsigned int v19; // r8d
  unsigned int v20; // r9d
  unsigned int v21; // r8d
  unsigned int v22; // r9d
  unsigned int v23; // r9d
  unsigned int v24; // r8d
  unsigned int v25; // r9d
  unsigned int v26; // r8d
  unsigned int v27; // r9d
  unsigned int v28; // r8d
  unsigned int v29; // r9d
  unsigned int v30; // r8d
  unsigned int v31; // r9d
  unsigned int v32; // eax
  unsigned int v33; // r9d
  unsigned int v34; // r8d
  unsigned int v35; // r9d
  char v36; // r11
  unsigned int v37; // r8d
  char i; // cl
  unsigned int v39; // edx
  _OWORD *v40; // rax
  char *v41; // rcx
  _OWORD *v42; // rax
  __int64 v43; // rcx
  PVOID *Object; // [rsp+20h] [rbp-348h]
  char v46; // [rsp+50h] [rbp-318h]
  PVOID v47; // [rsp+58h] [rbp-310h] BYREF
  HANDLE v48; // [rsp+60h] [rbp-308h] BYREF
  HANDLE Handle[2]; // [rsp+68h] [rbp-300h] BYREF
  __int128 v50; // [rsp+78h] [rbp-2F0h] BYREF
  __int128 v51; // [rsp+88h] [rbp-2E0h] BYREF
  __int128 v52; // [rsp+98h] [rbp-2D0h]
  _BYTE v53[8]; // [rsp+B0h] [rbp-2B8h] BYREF
  HANDLE v54; // [rsp+B8h] [rbp-2B0h]
  char v55; // [rsp+C0h] [rbp-2A8h] BYREF
  unsigned int v56; // [rsp+C8h] [rbp-2A0h] BYREF
  unsigned int v57; // [rsp+CCh] [rbp-29Ch] BYREF
  unsigned int v58; // [rsp+D0h] [rbp-298h] BYREF
  unsigned int v59; // [rsp+D4h] [rbp-294h] BYREF
  unsigned int v60; // [rsp+D8h] [rbp-290h] BYREF
  unsigned int v61; // [rsp+DCh] [rbp-28Ch] BYREF
  unsigned int v62; // [rsp+E0h] [rbp-288h] BYREF
  unsigned int v63; // [rsp+E4h] [rbp-284h] BYREF
  unsigned int v64; // [rsp+E8h] [rbp-280h] BYREF
  unsigned int v65; // [rsp+ECh] [rbp-27Ch] BYREF
  unsigned int v66; // [rsp+F0h] [rbp-278h] BYREF
  unsigned int v67; // [rsp+F4h] [rbp-274h] BYREF
  unsigned int v68; // [rsp+F8h] [rbp-270h] BYREF
  unsigned int v69; // [rsp+FCh] [rbp-26Ch] BYREF
  unsigned int v70; // [rsp+100h] [rbp-268h] BYREF
  unsigned int v71; // [rsp+104h] [rbp-264h] BYREF
  unsigned int v72; // [rsp+108h] [rbp-260h] BYREF
  unsigned int v73[64]; // [rsp+10Ch] [rbp-25Ch] BYREF
  __int16 v74; // [rsp+20Eh] [rbp-15Ah]
  __int16 v75; // [rsp+30Eh] [rbp-5Ah]
  _QWORD v76[4]; // [rsp+310h] [rbp-58h] BYREF

  v4 = (unsigned int)Length;
  v5 = Address;
  v6 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  DWORD1(v50) = 0;
  HIDWORD(v51) = 0;
  v46 = 0;
  if ( (unsigned int)Length < 0x10 )
    goto LABEL_2;
  *(_OWORD *)Handle = *Address;
  if ( BYTE5(Handle[0]) != 0xCF )
    goto LABEL_4;
  if ( BYTE4(Handle[0]) )
  {
    if ( BYTE4(Handle[0]) != 2 )
    {
      if ( BYTE4(Handle[0]) != 3 )
      {
        v7 = -1073741821;
        goto LABEL_51;
      }
LABEL_4:
      v7 = -1073741637;
      goto LABEL_51;
    }
    v7 = sub_1406D75F4(AccessMode);
    if ( v7 < 0 )
      goto LABEL_51;
    if ( (_DWORD)v4 == 40 )
    {
      v50 = *v5;
      v51 = v5[1];
      *(_QWORD *)&v52 = *((_QWORD *)v5 + 4);
      v47 = 0LL;
      v7 = ObReferenceObjectByHandle(Handle[1], 1u, qword_140C15D70, AccessMode, &v47, 0LL);
      v6 = (char *)v47;
      if ( v7 >= 0 )
      {
        v7 = sub_1409F352C((ULONG_PTR)v47, (__int64)&v51, AccessMode);
        if ( v7 >= 0 )
        {
LABEL_50:
          v7 = 0;
          goto LABEL_51;
        }
      }
      goto LABEL_51;
    }
LABEL_2:
    v7 = -1073741820;
    goto LABEL_51;
  }
  if ( !AccessMode )
    goto LABEL_4;
  v7 = sub_1406D75F4(AccessMode);
  if ( v7 < 0 )
    goto LABEL_51;
  if ( (unsigned int)v4 < 0x280 )
    goto LABEL_2;
  v8 = 4LL;
  ProbeForWrite(v5, v4, 4u);
  v9 = v5;
  v10 = v53;
  v11 = 5LL;
  do
  {
    *v10 = *v9;
    v10[1] = v9[1];
    v10[2] = v9[2];
    v10[3] = v9[3];
    v10[4] = v9[4];
    v10[5] = v9[5];
    v10[6] = v9[6];
    v10 += 8;
    *(v10 - 1) = v9[7];
    v9 += 8;
    --v11;
  }
  while ( v11 );
  sub_1409EE768(&v56, 0x400u, 0x10u, 0x4000u);
  sub_1409EE768(&v72, 0x100u, v12, v13);
  sub_1409EE768(v73, 0x800u, v14, 0x10000u);
  v15 = v73[0];
  if ( ((v73[0] - 1) & v73[0]) != 0 )
  {
    v16 = -1;
    if ( v73[0] )
    {
      do
      {
        ++v16;
        v15 >>= 1;
      }
      while ( v15 );
    }
    v15 = 1 << v16;
  }
  if ( (v55 & 0x40) != 0 )
    v15 = 0;
  v73[0] = v15;
  sub_1409EE768(&v64, 0x3E8u, 1u, 0x6B49D200u);
  sub_1409EE768(&v66, 1u, v17, v18);
  sub_1409EE768(&v68, 1u, v19, v20);
  sub_1409EE768(&v70, 1u, v21, v22);
  sub_1409EE768(&v65, 0, 0, v23);
  sub_1409EE768(&v67, 0, v24, v25);
  sub_1409EE768(&v69, 0, v26, v27);
  sub_1409EE768(&v71, 0, v28, v29);
  sub_1409EE768(&v59, 8u, 1u, 0x80u);
  sub_1409EE768(&v60, 0x20000u, 0x4000u, 0x100000u);
  sub_1409EE768(&v61, 4u, 2u, 0x100u);
  v32 = v61;
  if ( v55 < 0 )
    v32 = 0;
  v61 = v32;
  sub_1409EE768(&v62, 4u, v30, v31);
  sub_1409EE768(&v63, 0x10u, 4u, v33);
  sub_1409EE768(&v57, 0x400u, 0x10u, 0x8000000u);
  sub_1409EE768(&v58, 0x10000u, v34, v35);
  v37 = 4 * v72;
  if ( v57 >= 4 * v72 )
    v37 = v57;
  if ( ((v37 - 1) & v37) != 0 )
  {
    for ( i = v36; v37; v37 >>= 1 )
      ++i;
    v37 = 1 << i;
  }
  v57 = v37;
  v39 = v58;
  if ( ((v58 - 1) & v58) != 0 )
  {
    if ( v58 )
    {
      do
      {
        ++v36;
        v39 >>= 1;
      }
      while ( v39 );
    }
    v39 = 1 << v36;
  }
  if ( v39 < v37 )
    v39 = v37;
  v58 = v39;
  v75 = 0;
  v74 = 0;
  LODWORD(v50) = 48;
  *((_QWORD *)&v50 + 1) = 0LL;
  DWORD2(v51) = 0;
  *(_QWORD *)&v51 = 0LL;
  v52 = 0LL;
  v7 = sub_14072B3B0(0, qword_140C15D70, (int)&v50, AccessMode, (__int64)Object, 1224, 0, 0, &v47, 0LL);
  v6 = (char *)v47;
  if ( v7 >= 0 )
  {
    sub_1409F28D4((__int64)v47);
    v40 = v6 + 24;
    v41 = &v55;
    do
    {
      *v40 = *(_OWORD *)v41;
      v40[1] = *((_OWORD *)v41 + 1);
      v40[2] = *((_OWORD *)v41 + 2);
      v40[3] = *((_OWORD *)v41 + 3);
      v40[4] = *((_OWORD *)v41 + 4);
      v40[5] = *((_OWORD *)v41 + 5);
      v40[6] = *((_OWORD *)v41 + 6);
      v40 += 8;
      *(v40 - 1) = *((_OWORD *)v41 + 7);
      v41 += 128;
      --v8;
    }
    while ( v8 );
    *v40 = *(_OWORD *)v41;
    v40[1] = *((_OWORD *)v41 + 1);
    v40[2] = *((_OWORD *)v41 + 2);
    v40[3] = *((_OWORD *)v41 + 3);
    v40[4] = *((_OWORD *)v41 + 4);
    *((_DWORD *)v6 + 283) = sub_1409F21D0((wchar_t *)v6 + 180, (__int64)(v6 + 968));
    *((_DWORD *)v6 + 282) = sub_1409F21D0((wchar_t *)v6 + 52, (__int64)(v6 + 808));
    if ( !v76[0] || (v7 = sub_1409F352C((ULONG_PTR)v6, (__int64)v76, AccessMode), v7 >= 0) )
    {
      Handle[0] = 0LL;
      v7 = ObReferenceObjectByHandle(
             (HANDLE)v76[3],
             0x1F0003u,
             (POBJECT_TYPE)ExEventObjectType,
             AccessMode,
             Handle,
             0LL);
      *((HANDLE *)v6 + 145) = Handle[0];
      if ( v7 >= 0 )
      {
        v46 = 1;
        v7 = sub_1409F36F4(v6);
        if ( v7 >= 0 )
        {
          ObfReferenceObject(v6);
          v7 = sub_140729C30(v6, 0LL, 1, 0, 0, 0LL, &v48);
          if ( v7 >= 0 )
          {
            v54 = v48;
            v53[6] = 0;
            v42 = v53;
            v43 = 5LL;
            do
            {
              *v5 = *v42;
              v5[1] = v42[1];
              v5[2] = v42[2];
              v5[3] = v42[3];
              v5[4] = v42[4];
              v5[5] = v42[5];
              v5[6] = v42[6];
              v5 += 8;
              *(v5 - 1) = v42[7];
              v42 += 8;
              --v43;
            }
            while ( v43 );
            v48 = 0LL;
            goto LABEL_50;
          }
        }
      }
    }
  }
LABEL_51:
  if ( v48 )
    NtClose(v48);
  if ( v6 )
  {
    if ( v7 < 0 && v46 )
      sub_1409F39DC((__int64)v6);
    ObfDereferenceObject(v6);
  }
  return (unsigned int)v7;
}
