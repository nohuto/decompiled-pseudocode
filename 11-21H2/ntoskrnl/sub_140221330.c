/*
 * XREFs of sub_140221330 @ 0x140221330
 * Callers:
 *     sub_14023A860 @ 0x14023A860 (sub_14023A860.c)
 * Callees:
 *     sub_140221620 @ 0x140221620 (sub_140221620.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     HalAllocateAdapterChannel @ 0x140456840 (HalAllocateAdapterChannel.c)
 *     sub_140513310 @ 0x140513310 (sub_140513310.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140221330(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        char a8,
        _DWORD *P,
        unsigned int a10)
{
  __int64 v10; // rdi
  int v14; // esi
  __int64 result; // rax
  __int64 v16; // r9
  _DWORD *v17; // r11
  char *v18; // r15
  char *v19; // r14
  __int64 v20; // rcx
  unsigned int v21; // r10d
  unsigned int v22; // ebp
  int v23; // r8d
  unsigned int v24; // r8d
  char *v25; // rbx
  __int64 *v26; // r9
  __int64 *v27; // rsi
  __int64 v28; // r15
  __int64 *v29; // rcx
  unsigned int v30; // edx
  unsigned int v31; // edi
  unsigned int v32; // eax
  bool v33; // zf
  unsigned int v34; // edx
  __int64 v35; // r10
  char v36; // r14
  unsigned int v37; // edi
  __int64 v38; // r8
  _QWORD *v39; // rbx
  int AdapterChannel; // edi
  _DWORD *v41; // rax
  int v42; // [rsp+20h] [rbp-68h]
  int v43; // [rsp+28h] [rbp-60h]
  unsigned int v44; // [rsp+40h] [rbp-48h] BYREF
  char *Pool2; // [rsp+48h] [rbp-40h] BYREF
  __int64 *v47; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v48; // [rsp+A8h] [rbp+20h]

  v48 = a4;
  v10 = a4;
  LODWORD(Pool2) = 0;
  v44 = 0;
  LODWORD(v47) = 0;
  if ( !a3 )
    return 3221225485LL;
  v14 = a5;
  result = sub_140221620(a1, (_DWORD)a3, a4, a5, (__int64)&v47, (__int64)&Pool2, (__int64)&v44);
  if ( (int)result >= 0 )
  {
    if ( *(_BYTE *)(a1 + 432) )
    {
      v37 = v44;
      v36 = a8;
    }
    else
    {
      if ( *(_BYTE *)(a1 + 437) )
        goto LABEL_5;
      v36 = a8;
      if ( a8 )
        goto LABEL_5;
      v37 = v44;
      if ( !v44 )
      {
        v10 = v48;
LABEL_5:
        v17 = P;
        if ( P )
        {
          if ( a10 >= (unsigned int)v47 )
          {
            v18 = (char *)P;
            Pool2 = (char *)P;
LABEL_8:
            v19 = v18 + 16;
            v20 = a3[4] + *((unsigned int *)a3 + 11);
            v21 = a5;
            *((_QWORD *)v18 + 1) = 0LL;
            v22 = v10 & 0xFFF;
            v23 = *((_DWORD *)a3 + 10) - v10;
            v47 = a3;
            v24 = v20 + v23;
            v25 = v18 + 16;
            v26 = a3;
            v27 = &a3[((v10 - (v20 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 6];
            if ( v21 )
            {
              v28 = v48;
              do
              {
                v29 = (__int64 *)*v26;
                v30 = v21;
                v31 = v21;
                if ( v24 <= v21 )
                  v30 = v24;
                if ( v29 )
                  v31 = v30;
                v32 = v21 - v30;
                v21 = 0;
                if ( v29 )
                  v21 = v32;
                v33 = *(_BYTE *)(a1 + 437) == 0;
                a5 = v21;
                if ( v33 )
                {
                  if ( v26 == a3 )
                    v38 = v28;
                  else
                    v38 = v26[4] + v22;
                  LOBYTE(v43) = 0;
                  LOBYTE(v42) = a8;
                  sub_140513310(v29, v47, v38, v31, v42, v43);
                  v26 = v47;
                  v21 = a5;
                }
                if ( v31 )
                {
                  do
                  {
                    v34 = 4096 - v22;
                    v35 = v22 + (*v27 << 12);
                    *((_DWORD *)v25 + 2) = 4096 - v22;
                    *(_QWORD *)v25 = v35;
                    if ( 4096 - v22 > v31 )
                    {
                      *((_DWORD *)v25 + 2) = v31;
                      v34 = v31;
                    }
                    v31 -= v34;
                    if ( v25 != v19
                      && v35 == *((_QWORD *)v25 - 3) + *((unsigned int *)v25 - 4)
                      && ((*v27 ^ (*v27 - 1)) & 0xFFFFFFFFFFF00000uLL) == 0 )
                    {
                      *((_DWORD *)v25 - 4) += v34;
                      v25 -= 24;
                    }
                    v22 = 0;
                    v25 += 24;
                    ++v27;
                  }
                  while ( v31 );
                  v26 = v47;
                  v21 = a5;
                }
                v26 = (__int64 *)*v26;
                v47 = v26;
                if ( !v26 )
                  break;
                v22 = *((_DWORD *)v26 + 11);
                v27 = v26 + 6;
                v24 = *((_DWORD *)v26 + 10);
              }
              while ( v21 );
              v18 = Pool2;
              v17 = P;
            }
            *(_DWORD *)v18 = (v25 - v18 - 16) / 24;
            if ( v17 )
              *((_QWORD *)v18 + 1) = 1LL;
            sub_14042A5E0(a2, *(_QWORD *)(a2 + 32), v18);
            return 0LL;
          }
          return 3221225507LL;
        }
        Pool2 = (char *)ExAllocatePool2(66LL, (unsigned int)v47, 1147953480LL, v16);
        v18 = Pool2;
        if ( Pool2 )
        {
          v17 = P;
          goto LABEL_8;
        }
        return 3221225626LL;
      }
    }
    v39 = P;
    if ( P )
    {
      if ( a10 < (unsigned int)v47 )
        return 3221225507LL;
      *P |= 1u;
    }
    else
    {
      v41 = (_DWORD *)ExAllocatePool2(66LL, (unsigned int)v47, 1147953480LL, v16);
      v39 = v41;
      if ( !v41 )
        return 3221225626LL;
      *v41 = 0;
    }
    v39[4] = v48;
    v39[15] = a6;
    v39[16] = a7;
    v39[1] = a3;
    v39[2] = 0LL;
    *((_DWORD *)v39 + 10) = v14;
    v39[18] = a1;
    *((_BYTE *)v39 + 152) = v36;
    v33 = *(_BYTE *)(a1 + 432) == 0;
    v39[10] = v39;
    if ( !v33 )
      v37 = (unsigned int)Pool2;
    *((_DWORD *)v39 + 11) = v37;
    v39[12] = a2;
    v39[13] = *(_QWORD *)(a2 + 32);
    AdapterChannel = HalAllocateAdapterChannel(a1, v39 + 6, v37, &sub_140458340);
    if ( AdapterChannel < 0 )
      ExFreePoolWithTag(v39, 0);
    return (unsigned int)AdapterChannel;
  }
  return result;
}
