/*
 * XREFs of SeCreateClientSecurity @ 0x1407271D0
 * Callers:
 *     sub_140667114 @ 0x140667114 (sub_140667114.c)
 *     sub_1406BFD10 @ 0x1406BFD10 (sub_1406BFD10.c)
 *     sub_1406ECE0C @ 0x1406ECE0C (sub_1406ECE0C.c)
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 *     sub_1407A74A4 @ 0x1407A74A4 (sub_1407A74A4.c)
 *     sub_1407B0C70 @ 0x1407B0C70 (sub_1407B0C70.c)
 *     sub_140854CB8 @ 0x140854CB8 (sub_140854CB8.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402F8EF0 @ 0x1402F8EF0 (sub_1402F8EF0.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     sub_140727350 @ 0x140727350 (sub_140727350.c)
 *     sub_14072A6B0 @ 0x14072A6B0 (sub_14072A6B0.c)
 */

NTSTATUS __stdcall SeCreateClientSecurity(
        PETHREAD ClientThread,
        PSECURITY_QUALITY_OF_SERVICE ClientSecurityQos,
        BOOLEAN RemoteSession,
        PSECURITY_CLIENT_CONTEXT ClientContext)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rsi
  __int64 *v9; // rbx
  int v10; // ebp
  char v11; // r14
  NTSTATUS result; // eax
  NTSTATUS v13; // esi
  char v14; // [rsp+60h] [rbp-38h] BYREF
  char v15; // [rsp+61h] [rbp-37h] BYREF
  _BYTE v16[2]; // [rsp+62h] [rbp-36h] BYREF
  int v17; // [rsp+64h] [rbp-34h] BYREF
  __int64 v18; // [rsp+68h] [rbp-30h] BYREF
  char v19; // [rsp+A0h] [rbp+8h] BYREF

  v14 = 0;
  v17 = 0;
  v19 = 0;
  v15 = 0;
  v18 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( ClientThread == CurrentThread )
    v8 = *((_QWORD *)CurrentThread + 23);
  else
    v8 = *((_QWORD *)ClientThread + 68);
  v9 = (__int64 *)sub_14072A6B0(ClientThread, 0LL, 1665361235LL, v16, &v14, &v17, &v19);
  if ( v9 )
  {
    v11 = v14;
    v10 = 2;
  }
  else
  {
    v9 = (__int64 *)sub_140347920(v8, 0x63436553u);
    v10 = 1;
    v11 = 0;
    v19 = *(_BYTE *)(v8 + 2170);
  }
  sub_1402F8EF0(v9[138], (__int64)&v19, &v15, &v18);
  result = sub_140727350(
             (_DWORD)v9,
             (_DWORD)ClientSecurityQos,
             RemoteSession,
             v10,
             v11,
             v17,
             0,
             0LL,
             v15,
             v18,
             (__int64)ClientContext);
  v13 = result;
  if ( result < 0 || !ClientSecurityQos->ContextTrackingMode )
  {
    ObfDereferenceObjectWithTag(v9, 0x63436553u);
    return v13;
  }
  return result;
}
