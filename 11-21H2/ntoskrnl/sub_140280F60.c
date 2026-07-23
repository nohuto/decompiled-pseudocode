/*
 * XREFs of sub_140280F60 @ 0x140280F60
 * Callers:
 *     <none>
 * Callees:
 *     sub_140281380 @ 0x140281380 (sub_140281380.c)
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140280F60(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 a4, int a5, __int16 a6)
{
  __int64 ThreadServerSilo; // r14
  unsigned int v10; // ecx
  __int64 result; // rax
  __int64 v12; // rdx
  const EVENT_DESCRIPTOR *v13; // rdx
  __int16 v14; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v15[2]; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-11h] BYREF
  __int64 v17; // [rsp+68h] [rbp-1h]
  unsigned int v18; // [rsp+70h] [rbp+7h]
  int v19; // [rsp+74h] [rbp+Bh]
  __int16 *v20; // [rsp+78h] [rbp+Fh]
  __int64 v21; // [rsp+80h] [rbp+17h]

  v15[1] = 0LL;
  v14 = 0;
  if ( a1 )
    ThreadServerSilo = *(_QWORD *)(a1 + 2160);
  else
    ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
  v10 = *a3;
  v15[0] = a2;
  if ( v10 > 0x2000 )
    v10 = 0x2000;
  *(_QWORD *)&UserData.Size = 8LL;
  v18 = v10;
  UserData.Ptr = (ULONGLONG)v15;
  v17 = *((_QWORD *)a3 + 1);
  v20 = &v14;
  v19 = 0;
  v21 = 2LL;
  result = qword_140D05008 + 4540;
  if ( qword_140D05008 != -4540 )
  {
    result = *(unsigned int *)result;
    if ( (result & 0x200) != 0 )
    {
      if ( a6 == 1056 )
      {
        v13 = (const EVENT_DESCRIPTOR *)qword_140039678;
      }
      else
      {
        result = 1059LL;
        if ( a6 != 1059 )
          goto LABEL_7;
        v13 = &stru_140038770;
      }
      EtwWriteEx(qword_140C16010, v13, 0LL, 0, 0LL, 0LL, 3u, &UserData);
      return sub_140281380(ThreadServerSilo, (unsigned int)&UserData, 3, 512, a6, 4200450);
    }
  }
LABEL_7:
  if ( a6 != 1060 )
    return sub_140281380(ThreadServerSilo, (unsigned int)&UserData, 3, 512, a6, 4200450);
  if ( a4 )
  {
    if ( a4 != ThreadServerSilo )
      return result;
    result = *(_QWORD *)(a4 + 1464);
  }
  else
  {
    result = (__int64)&unk_140D32580;
  }
  v12 = *(_QWORD *)(result + 864);
  if ( v12 )
    return sub_1402AB170((unsigned int)&UserData, v12, a5, 3, 1060, 4200450);
  return result;
}
