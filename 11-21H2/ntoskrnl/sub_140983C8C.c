/*
 * XREFs of sub_140983C8C @ 0x140983C8C
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     sub_140217454 @ 0x140217454 (sub_140217454.c)
 *     sub_14025E6B4 @ 0x14025E6B4 (sub_14025E6B4.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402EF060 @ 0x1402EF060 (sub_1402EF060.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140983B80 @ 0x140983B80 (sub_140983B80.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall sub_140983C8C(__int64 a1, void *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  unsigned int v5; // edi
  _DWORD *v6; // rax
  _QWORD *v7; // rsi
  int v8; // edi
  _QWORD *v9; // r14
  unsigned int v10; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v12; // r15
  int *v13; // rax
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 0LL;
  Object = 0LL;
  result = ObReferenceObjectByHandle(
             a2,
             1u,
             (POBJECT_TYPE)ExEventObjectType,
             *((_BYTE *)KeGetCurrentThread() + 562),
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v5 = (unsigned __int16)word_140D05000;
    v6 = sub_1402828F0(64, 224LL * (unsigned __int16)word_140D05000 + 64, 0x6363454Du);
    v7 = v6;
    if ( v6 )
    {
      *v6 = v5;
      sub_14025E6B4((__int64)(v6 + 2));
      v7[4] = Object;
      v9 = v7 + 8;
      v7[6] = &StartContext;
      v10 = 0;
      CurrentThread = KeGetCurrentThread();
      v7[5] = 0LL;
      v7[7] = CurrentThread;
      if ( v5 )
      {
        v12 = v7 + 13;
        do
        {
          *v9 = v7;
          *((_DWORD *)v12 - 8) = v10;
          *(v12 - 3) = 0LL;
          *(v12 - 1) = sub_140983B10;
          *v12 = v9;
          sub_1402EF060((ULONG_PTR)(v12 - 3), 4, v10++, qword_140C55030);
          v9 += 28;
          v12 += 28;
        }
        while ( v10 < v5 );
      }
      v15 = 0LL;
      v8 = sub_140983B80((__int64)v7, &v15);
      sub_140217454((__int64)(v7 + 1), 0);
      if ( v8 >= 0 )
      {
        v13 = (int *)v9 + 3;
        while ( 1 )
        {
          v13 -= 56;
          if ( *v13 < 0 )
            break;
          if ( !--v10 )
            goto LABEL_13;
        }
        v8 = *v13;
      }
LABEL_13:
      *a3 = v15 + v7[5];
      ExFreePoolWithTag(v7, 0);
      if ( *((_DWORD *)Object + 1) || (*((_DWORD *)KeGetCurrentThread() + 344) & 1) != 0 )
        v8 = -1073741248;
      else
        _InterlockedIncrement(&dword_140C52B10);
    }
    else
    {
      v8 = -1073741670;
    }
    ObfDereferenceObject(Object);
    return v8;
  }
  return result;
}
