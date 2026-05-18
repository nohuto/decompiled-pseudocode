/*
 * XREFs of sub_18004C480 @ 0x18004C480
 * Callers:
 *     sub_180097AA0 @ 0x180097AA0 (sub_180097AA0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001C5F8 @ 0x18001C5F8 (sub_18001C5F8.c)
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_18001C680 @ 0x18001C680 (sub_18001C680.c)
 *     sub_180026B04 @ 0x180026B04 (sub_180026B04.c)
 *     sub_180032160 @ 0x180032160 (sub_180032160.c)
 *     sub_18003890C @ 0x18003890C (sub_18003890C.c)
 *     sub_180039428 @ 0x180039428 (sub_180039428.c)
 *     sub_180039698 @ 0x180039698 (sub_180039698.c)
 *     sub_1800398B4 @ 0x1800398B4 (sub_1800398B4.c)
 *     sub_18003C06C @ 0x18003C06C (sub_18003C06C.c)
 *     sub_18003C72C @ 0x18003C72C (sub_18003C72C.c)
 *     sub_18003E7C4 @ 0x18003E7C4 (sub_18003E7C4.c)
 *     sub_18004330C @ 0x18004330C (sub_18004330C.c)
 *     sub_180043F98 @ 0x180043F98 (sub_180043F98.c)
 *     sub_1800444B8 @ 0x1800444B8 (sub_1800444B8.c)
 *     sub_180048C84 @ 0x180048C84 (sub_180048C84.c)
 *     sub_18004B9C4 @ 0x18004B9C4 (sub_18004B9C4.c)
 *     sub_18004BA08 @ 0x18004BA08 (sub_18004BA08.c)
 *     sub_18004BAD8 @ 0x18004BAD8 (sub_18004BAD8.c)
 *     sub_18004BBF0 @ 0x18004BBF0 (sub_18004BBF0.c)
 *     sub_18004C8D0 @ 0x18004C8D0 (sub_18004C8D0.c)
 *     sub_180060A34 @ 0x180060A34 (sub_180060A34.c)
 *     sub_180084738 @ 0x180084738 (sub_180084738.c)
 *     sub_1800A112C @ 0x1800A112C (sub_1800A112C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_18004C480(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  int v8; // ecx
  _QWORD *v9; // rax
  __int64 (__fastcall ***v10)(_QWORD); // r15
  __int64 *v11; // rax
  _QWORD *v12; // rbx
  char *v13; // rax
  void *v14; // rax
  _QWORD *v15; // rax
  __int64 *v16; // rax
  __int64 *v17; // rax
  double *v18; // rax
  char v19; // r12
  unsigned __int64 v20; // r14
  __int64 v21; // r15
  __int64 v22; // r13
  _QWORD *v23; // rax
  __int64 v24; // r12
  bool v25; // al
  _QWORD *v26; // rcx
  unsigned int v27; // ebx
  _QWORD *v28; // rcx
  _QWORD *v29; // rcx
  _QWORD *v30; // rcx
  __int64 result; // rax
  char v32; // [rsp+30h] [rbp-D0h]
  __int64 (__fastcall ***v33)(_QWORD); // [rsp+38h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+40h] [rbp-C0h]
  Concurrency::details::ResourceManager *v35; // [rsp+48h] [rbp-B8h] BYREF
  volatile signed __int32 *v36; // [rsp+50h] [rbp-B0h]
  __int64 v37; // [rsp+58h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+68h] [rbp-98h]
  __int128 v40; // [rsp+70h] [rbp-90h] BYREF
  __int64 v41; // [rsp+80h] [rbp-80h] BYREF
  __int64 v42; // [rsp+88h] [rbp-78h]
  unsigned int v43; // [rsp+90h] [rbp-70h]
  __int128 v44[2]; // [rsp+A0h] [rbp-60h] BYREF
  char v45[32]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v46[4]; // [rsp+E0h] [rbp-20h] BYREF

  v5 = a3;
  v37 = a3;
  v8 = *(_DWORD *)(*(_QWORD *)a4 + 440LL);
  if ( (v8 & 0x10000) != 0 && (v8 & 0x800000) != 0 )
    sub_18004C8D0(a1);
  v40 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a4 + 440LL) & 0x4000000) != 0 )
  {
    v9 = sub_180039428(*a2, &v35);
    sub_18003890C((__int64)v9, &v33);
    if ( v36 )
      sub_180010574(v36);
    v10 = v33;
    if ( v33 )
    {
      v11 = sub_18004330C(a1, &v38);
      v12 = sub_18003C06C(*v11, v46);
      v13 = sub_18001C680(v45, (_QWORD *)(*(_QWORD *)a4 + 24LL), "_");
      v14 = (void *)sub_18001C5F8((__int64)v44, (__int64)v13, (__int64)v12);
      v15 = sub_18001C61C(&v41, v14, (__int64)"_Render");
      v16 = (__int64 *)sub_1800A112C(v10, &v35, v15, a2);
      sub_180032160(&v40, v16);
      if ( v36 )
        sub_180010574(v36);
      sub_180011B24((__int64)&v41);
      sub_180011B24((__int64)v44);
      sub_180011B24((__int64)v45);
      sub_180011B24((__int64)v46);
      if ( v39 )
        sub_180010530(v39);
      v5 = v37;
    }
    if ( v34 )
      sub_180010530(v34);
  }
  v17 = sub_18004330C(a1, &v38);
  v18 = (double *)sub_18003C72C(*v17, v46);
  sub_18003E7C4(*v18, v18[2], v18[4], v18[6]);
  v19 = (unsigned int)o__fdsign() != 0;
  v32 = v19;
  if ( v39 )
    sub_180010530(v39);
  v20 = 0LL;
  if ( sub_18004BAD8(a1) )
  {
    v21 = 0LL;
    do
    {
      if ( sub_18004BBF0(a1, v20) && sub_18004B9C4(v20) )
      {
        sub_18004BA08(a1, &v35, v20);
        if ( sub_180011DE0(&v35) )
        {
          sub_180043F98(v35, (__int64)&v41, v5, a2, v19);
          v22 = v41;
          if ( !sub_1800444B8(v41 + 128) )
          {
            sub_180026B04((__int64)v35, &v33);
            if ( sub_180011DE0(&v33) )
            {
              v23 = (_QWORD *)sub_180060A34(v33, &v38);
              (*(void (__fastcall **)(_QWORD, __int64, unsigned __int64))(*(_QWORD *)*v23 + 48LL))(*v23, a1, v20);
              if ( v39 )
                sub_180010530(v39);
              v24 = *(_QWORD *)(a1 + 104);
              v25 = sub_180011DE0((_QWORD *)(v21 + v24 + 24));
              v27 = v43;
              if ( v25 )
                sub_180084738(*v26, a2, v43);
              sub_1800398B4(*a2, *(_BYTE *)(a1 + 168));
              v44[0] = *(_OWORD *)(a1 + 172);
              sub_180039698(*a2, v44);
              if ( sub_180011DE0((_QWORD *)(v21 + v24 + 40)) )
                sub_180084738(*v28, a2, v27);
              if ( sub_180011DE0((_QWORD *)(v21 + v24 + 56)) )
                sub_180084738(*v29, a2, v27);
              if ( sub_180011DE0((_QWORD *)(v21 + v24 + 72)) )
                sub_180084738(*v30, a2, v27);
              sub_180048C84(*(_QWORD *)(a1 + 88), a2, *(_QWORD *)(v22 + 136));
              v5 = v37;
              v19 = v32;
            }
            if ( v34 )
              sub_180010530(v34);
          }
          if ( v42 )
            sub_180010530(v42);
        }
        if ( v36 )
          sub_180010530((__int64)v36);
      }
      ++v20;
      v21 += 88LL;
    }
    while ( v20 < sub_18004BAD8(a1) );
  }
  result = (__int64)sub_18003890C((__int64)&v40, &v33);
  if ( v33 )
    result = (**v33)(v33);
  if ( v34 )
    result = sub_180010530(v34);
  if ( *((_QWORD *)&v40 + 1) )
    return sub_180010574(*((volatile signed __int32 **)&v40 + 1));
  return result;
}
