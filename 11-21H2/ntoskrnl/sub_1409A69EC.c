/*
 * XREFs of sub_1409A69EC @ 0x1409A69EC
 * Callers:
 *     sub_1409A6270 @ 0x1409A6270 (sub_1409A6270.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 *     sub_1409AB284 @ 0x1409AB284 (sub_1409AB284.c)
 */

__int64 __fastcall sub_1409A69EC(__int64 a1, __int64 a2)
{
  void *v3; // rcx
  KPROCESSOR_MODE v4; // r9
  NTSTATUS v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // eax
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(void **)(a1 + 8);
  v4 = *((_BYTE *)KeGetCurrentThread() + 562);
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(v3, 0xF0000u, qword_140D3CDB8, v4, &Object, 0LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    sub_1409A8628("TtmiReferenceQueueByHandle", 310LL, (unsigned int)v5, (unsigned int)v5);
    v7 = v6;
    v8 = v6;
    v9 = 410LL;
LABEL_3:
    sub_1409A8628("TtmpDispatchGetTerminalEvent", v9, v8, v7);
    goto LABEL_7;
  }
  v10 = sub_1409AB284(Object, a2);
  v6 = v10;
  if ( v10 < 0 )
  {
    v7 = (unsigned int)v10;
    v8 = (unsigned int)v10;
    v9 = 418LL;
    goto LABEL_3;
  }
  v6 = 0;
LABEL_7:
  if ( Object )
    ObfDereferenceObject(Object);
  return v6;
}
