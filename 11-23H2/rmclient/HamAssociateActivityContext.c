/*
 * XREFs of HamAssociateActivityContext @ 0x180014660
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001104 @ 0x180001104 (sub_180001104.c)
 *     sub_1800011A0 @ 0x1800011A0 (sub_1800011A0.c)
 *     sub_1800026E8 @ 0x1800026E8 (sub_1800026E8.c)
 *     sub_180006F5C @ 0x180006F5C (sub_180006F5C.c)
 *     sub_180007DE0 @ 0x180007DE0 (sub_180007DE0.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 *     sub_18001EC1C @ 0x18001EC1C (sub_18001EC1C.c)
 *     sub_18001F1C4 @ 0x18001F1C4 (sub_18001F1C4.c)
 */

__int64 __fastcall HamAssociateActivityContext(__int64 a1, __int64 *a2, __int64 a3)
{
  int v6; // ebx
  unsigned __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v13; // [rsp+30h] [rbp-39h] BYREF
  __int64 v14; // [rsp+38h] [rbp-31h] BYREF
  __int64 v15; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v17; // [rsp+70h] [rbp+7h]
  int v18; // [rsp+78h] [rbp+Fh]
  int v19; // [rsp+7Ch] [rbp+13h]
  __int64 *v20; // [rsp+80h] [rbp+17h]
  int v21; // [rsp+88h] [rbp+1Fh]
  int v22; // [rsp+8Ch] [rbp+23h]
  __int64 *v23; // [rsp+90h] [rbp+27h]
  int v24; // [rsp+98h] [rbp+2Fh]
  int v25; // [rsp+9Ch] [rbp+33h]

  if ( (unsigned int)dword_180032038 > 4 && (byte_180032048 & 1) != 0 && (qword_180032050 & 1) == qword_180032050 )
    sub_1800011A0((__int64)&dword_180032038, byte_18002A8A7);
  v13 = 0LL;
  v6 = sub_1800026E8(a3, a1, &v13);
  if ( v6 >= 0 )
  {
    sub_18001F1C4(a1 + 120);
    v7 = *(_QWORD *)(a1 + 136);
    if ( v7 )
    {
      if ( (unsigned __int64)a2 >= v7 && v7 + 160LL * *(unsigned int *)(a1 + 152) > (unsigned __int64)a2 )
      {
        v8 = *((_DWORD *)a2 + 38);
        if ( (v8 & 1) == 0 )
        {
          *((_DWORD *)a2 + 38) = v8 | 1;
          *(_DWORD *)(a1 + 128) = 0;
          RtlReleaseSRWLockExclusive(a1 + 120);
          v9 = v13;
          *(_QWORD *)(v13 + 48) = *a2;
          v10 = *(_QWORD *)(v9 + 40);
          sub_180006F5C(v10);
          sub_180007DE0(v9);
          *(_DWORD *)(v10 + 16) = 0;
          RtlReleaseSRWLockExclusive(v10 + 8);
          v6 = 0;
          goto LABEL_16;
        }
      }
      v6 = -1073741584;
    }
    else
    {
      v6 = -1073741436;
    }
    *(_DWORD *)(a1 + 128) = 0;
    RtlReleaseSRWLockExclusive(a1 + 120);
  }
  if ( v13 )
    sub_18001EC1C();
LABEL_16:
  if ( (unsigned int)dword_180032038 > 4 && (byte_180032048 & 3) != 0 && (qword_180032050 & 3) == qword_180032050 )
  {
    v11 = *a2;
    v25 = 0;
    v22 = 0;
    v19 = 0;
    v14 = v11;
    v23 = &v14;
    v20 = &v15;
    v17 = &v13;
    v24 = 8;
    v21 = 8;
    v15 = a1;
    LODWORD(v13) = v6;
    v18 = 4;
    sub_180001104((__int64)&dword_180032038, (unsigned __int8 *)dword_18002A944, 0LL, 0LL, 5u, &v16);
  }
  return (unsigned int)v6;
}
