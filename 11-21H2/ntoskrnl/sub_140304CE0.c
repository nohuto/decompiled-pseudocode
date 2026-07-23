/*
 * XREFs of sub_140304CE0 @ 0x140304CE0
 * Callers:
 *     sub_140304A20 @ 0x140304A20 (sub_140304A20.c)
 *     sub_140343B00 @ 0x140343B00 (sub_140343B00.c)
 * Callees:
 *     sub_14029394C @ 0x14029394C (sub_14029394C.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     sub_1403031F0 @ 0x1403031F0 (sub_1403031F0.c)
 *     sub_1403051E0 @ 0x1403051E0 (sub_1403051E0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405D2FA0 @ 0x1405D2FA0 (sub_1405D2FA0.c)
 *     sub_1405DC4F8 @ 0x1405DC4F8 (sub_1405DC4F8.c)
 */

char __fastcall sub_140304CE0(__int64 a1, char a2, int a3)
{
  __int64 v3; // r13
  _DWORD *v7; // rsi
  __int64 v8; // r14
  bool v9; // di
  char result; // al
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r10
  __int64 v18; // rcx
  unsigned __int64 v19; // r15
  const EVENT_DESCRIPTOR *v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int8 v23; // r10
  unsigned int v24; // edx
  __int64 v25; // r12
  unsigned __int64 v26; // r14
  unsigned int v27; // edi
  __int64 v28; // r15
  int v29; // r10d
  unsigned __int64 v30; // rbx
  unsigned int i; // r9d
  __int64 v32; // r11
  __int64 v33; // rax
  __int64 v34; // r8
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rbx
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // r14
  __int64 v41; // rcx
  __int64 v42; // rdx
  bool v43; // cf
  __int64 v44; // rcx
  __int64 *v45; // rax
  unsigned int v46; // r12d
  __int64 v47; // rcx
  __int64 v48; // rdx
  int v49; // r13d
  __int64 v50; // r14
  unsigned __int64 v51; // rax
  unsigned int j; // r15d
  unsigned __int64 v53; // r9
  int v54; // r10d
  __int64 v55; // rdx
  bool v56; // zf
  unsigned __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // [rsp+48h] [rbp-69h]
  _QWORD *v60; // [rsp+48h] [rbp-69h]
  int v61; // [rsp+50h] [rbp-61h] BYREF
  __int64 v62; // [rsp+58h] [rbp-59h] BYREF
  void *v63; // [rsp+60h] [rbp-51h]
  unsigned __int64 v64; // [rsp+68h] [rbp-49h]
  int v65; // [rsp+70h] [rbp-41h] BYREF
  int v66; // [rsp+78h] [rbp-39h] BYREF
  unsigned __int64 v67; // [rsp+80h] [rbp-31h] BYREF
  __int64 v68; // [rsp+88h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-19h] BYREF
  int *v70; // [rsp+A8h] [rbp-9h]
  __int64 v71; // [rsp+B0h] [rbp-1h]
  unsigned __int64 *v72; // [rsp+B8h] [rbp+7h]
  __int64 v73; // [rsp+C0h] [rbp+Fh]
  __int64 *v74; // [rsp+C8h] [rbp+17h]
  __int64 v75; // [rsp+D0h] [rbp+1Fh]

  v3 = *(_QWORD *)(a1 + 16);
  v68 = v3;
  if ( !v3 )
    return 1;
  v56 = *(_BYTE *)(a1 + 64) == 0;
  v7 = *(_DWORD **)(v3 + 152);
  v63 = *(void **)(v3 + 216);
  if ( v56 )
  {
    v59 = 0LL;
    v9 = 0;
    while ( 1 )
    {
      result = sub_1405DC4F8(a1, 0, a3, (int)v3 + 96, (__int64)v7);
      if ( !a2 )
        break;
      if ( result )
      {
        v8 = 0LL;
        goto LABEL_5;
      }
    }
    v8 = 0LL;
  }
  else
  {
    v8 = a1 - 33968;
    v59 = a1 - 33968;
    v9 = a1 - 33968 != (_QWORD)KeGetCurrentPrcb();
    result = sub_1403051E0((int)a1 - 33968, 0, v9, 1, v3 + 96, v7);
  }
  if ( result )
  {
LABEL_5:
    v11 = *(_QWORD *)(v3 + 96);
    v12 = *(_QWORD *)(v3 + 160);
    if ( v11 <= v12 )
      return 0;
    v13 = v11 - v12;
    v14 = *(_QWORD *)(v3 + 104) - *(_QWORD *)(v3 + 168);
    if ( v14 > v13 && v9 )
    {
      return 0;
    }
    else
    {
      if ( v8 && !v9 )
      {
        v38 = *(_QWORD *)(v8 + 33968);
        v39 = v38;
        v40 = *(_QWORD *)(v8 + 33976);
        v62 = 0LL;
        v41 = v40;
        if ( dword_140C0C5F0 && v38 && v40 && (v42 = *(_QWORD *)(v38 + 320)) != 0 )
        {
          if ( *(_BYTE *)(v59 + 33848) )
          {
            sub_14042A5E0(&v62, v42);
            v43 = *(_DWORD *)(v40 + 72) < *(_DWORD *)(v38 + 448);
            v8 = v59;
            if ( v43 )
            {
              *(_BYTE *)(v59 + 33856) = 0;
            }
            else if ( *(_BYTE *)(v59 + 33856) )
            {
              if ( *(_QWORD *)(v59 + 33864) != v62 )
              {
                v44 = (unsigned int)(*(_DWORD *)(v59 + 33852) + 1);
                *(_DWORD *)(v59 + 33852) = v44;
                if ( !((unsigned int)v44 % dword_140C0C5F0) || (_DWORD)v44 == 1 )
                {
                  LODWORD(v44) = HIDWORD(KeGetPcr()[1].LockArray);
                  sub_1405D2FA0(v44, v62, v59 + 33872);
                }
              }
            }
            else
            {
              *(_BYTE *)(v59 + 33856) = 1;
            }
            *(_QWORD *)(v59 + 33864) = v62;
            v39 = *(_QWORD *)(v59 + 33968);
            v41 = *(_QWORD *)(v59 + 33976);
          }
          else
          {
            v8 = v59;
          }
        }
        else
        {
          v8 = v59;
        }
        if ( v39 && v41 && *(_QWORD *)(v39 + 408) )
          sub_14042A5E0(*(_QWORD *)(v41 + 8), qword_140C204B8);
      }
      if ( !v14 )
        goto LABEL_38;
      v15 = *(_QWORD *)(v3 + 120) - *(_QWORD *)(v3 + 184);
      v16 = (*(_QWORD *)(v3 + 128) - *(_QWORD *)(v3 + 192)) / v14;
      v17 = v15 / v14;
      if ( *(_QWORD *)a1 )
        v18 = *(unsigned int *)(*(_QWORD *)a1 + 440LL);
      else
        v18 = *(unsigned int *)(v8 + 68);
      v64 = (unsigned int)v18;
      v19 = v15 * v18 / 0x64 / v14;
      if ( (_DWORD)v16 != *(_DWORD *)(v3 + 224) || (_DWORD)v17 != *(_DWORD *)(v3 + 228) )
      {
        v56 = *(_BYTE *)(a1 + 64) == 0;
        LODWORD(v62) = v19;
        v66 = v17;
        v65 = v16;
        v61 = 0;
        if ( v56 )
        {
          v20 = (const EVENT_DESCRIPTOR *)byte_14000E508;
          v61 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 20LL);
          *(_QWORD *)&UserData.Size = 4LL;
        }
        else
        {
          v20 = &stru_140010E28;
          LOWORD(v61) = *(unsigned __int8 *)(a1 - 33760);
          BYTE2(v61) = *(_BYTE *)(a1 - 33759);
          *(_QWORD *)&UserData.Size = 3LL;
        }
        UserData.Ptr = (ULONGLONG)&v61;
        if ( byte_140C5AE30 )
        {
          if ( qword_140C1F580
            && (sub_1403031F0(*(_QWORD *)(qword_140C1F580 + 32) + 96LL, v20->Level, v20->Keyword)
             || *(_BYTE *)(v22 + 101) && sub_1403031F0(*(_QWORD *)(v22 + 40) + 96LL, v23, v21)) )
          {
            v67 = sub_14029394C(v13, qword_140D069F8, 0xF4240uLL);
            v71 = 4LL;
            v70 = &v65;
            v72 = &v67;
            v45 = (__int64 *)&v66;
            v73 = 8LL;
            v75 = 4LL;
            if ( v20 != &stru_140010E28 )
              v45 = &v62;
            v74 = v45;
            EtwWriteEx(qword_140C1F580, v20, 0LL, 0, 0LL, 0LL, 4u, &UserData);
          }
        }
      }
      if ( !*(_BYTE *)(a1 + 64) )
        goto LABEL_38;
      v24 = (unsigned int)v19 >= 0x125C ? 47 : (unsigned int)v19 / 0x64;
      v25 = (unsigned int)v19;
      v26 = *(_QWORD *)v7 - *(_QWORD *)v63;
      v62 = v24;
      v27 = 0;
      v28 = *(_QWORD *)(v3 + 8LL * v24 + 1016);
      do
      {
        v29 = v7[12];
        v30 = 0LL;
        for ( i = 0; i < 2; ++i )
        {
          if ( v29 )
          {
            v32 = (unsigned int)v7[12];
            v33 = v29 * (i + 2 * v27);
            do
            {
              v34 = *(_QWORD *)&v7[2 * v33 + 14] - *((_QWORD *)v63 + v33 + 7);
              v33 = (unsigned int)(v33 + 1);
              v30 += v34;
              --v32;
            }
            while ( v32 );
          }
        }
        if ( v30 >= v26 )
          v26 = 0LL;
        else
          v26 -= v30;
        v35 = v30 * v25 / v64;
        v3 = v68;
        if ( v27 )
        {
          if ( v27 == 2 || v27 == 5 )
          {
            v36 = v62;
            *(_QWORD *)(v68 + 8 * v62 + 632) += v35;
          }
          else
          {
            v36 = v62;
          }
        }
        else
        {
          v36 = v62;
          *(_QWORD *)(v68 + 8 * v62 + 248) += v35;
        }
        v28 += v35;
        ++v27;
        *(_QWORD *)(v3 + 8 * v36 + 1016) = v28;
      }
      while ( v27 < 6 );
      if ( v26 )
      {
        *(_QWORD *)(v3 + 8 * v36 + 248) += v26;
        *(_QWORD *)(v3 + 8 * v36 + 1016) = v28 + v26;
      }
      if ( byte_140D068BC )
      {
        v46 = 0;
        v37 = v63;
        v47 = *(_QWORD *)(v59 + 34144);
        v48 = *(_QWORD *)(v59 + 34136);
        if ( dword_140C0C64C )
        {
          v60 = (_QWORD *)(v48 + 8);
          v67 = v47 - v48;
          do
          {
            v49 = v7[12];
            v50 = 0LL;
            v51 = 0LL;
            for ( j = 0; j < 6; ++j )
            {
              v53 = v51;
              v54 = 2 * j;
              v55 = *(_QWORD *)&v7[2 * v46 + 14 + 2 * v54 * v49] - v37[v46 + 7 + v54 * v49];
              v56 = *((_DWORD *)&unk_140D05420 + 2 * (int)j) == 3;
              v57 = v55 + v51;
              if ( *((_DWORD *)&unk_140D05420 + 2 * (int)j) == 3 )
                v57 = v53;
              v64 = v57;
              if ( v56 )
                v50 += v55;
              v58 = *(_QWORD *)&v7[2 * v46 + 14 + 2 * v49 * (v54 + 1)] - v37[v46 + 7 + v49 * (v54 + 1)];
              v51 = v64;
              if ( *((_DWORD *)&unk_140D05420 + 2 * (int)j + 1) == 3 )
                v50 += v58;
              else
                v51 = v58 + v64;
            }
            ++v46;
            *(_QWORD *)((char *)v60 + v67) = v51;
            *v60++ = v50;
          }
          while ( v46 < dword_140C0C64C );
          v3 = v68;
        }
      }
      else
      {
LABEL_38:
        v37 = v63;
      }
      *(_OWORD *)(v3 + 160) = *(_OWORD *)(v3 + 96);
      *(_OWORD *)(v3 + 176) = *(_OWORD *)(v3 + 112);
      *(_OWORD *)(v3 + 192) = *(_OWORD *)(v3 + 128);
      *(_QWORD *)(v3 + 208) = *(_QWORD *)(v3 + 144);
      memmove(v37, v7, 96 * v7[12] + 56);
      return 1;
    }
  }
  return result;
}
