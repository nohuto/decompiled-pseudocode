/*
 * XREFs of sub_14072B200 @ 0x14072B200
 * Callers:
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_14072DDC0 @ 0x14072DDC0 (sub_14072DDC0.c)
 * Callees:
 *     sub_1402A38B4 @ 0x1402A38B4 (sub_1402A38B4.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1403A0B00 @ 0x1403A0B00 (sub_1403A0B00.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall sub_14072B200(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 result; // rax
  int v9; // edi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v11; // rax
  _WORD *v12; // rcx
  __int16 v13; // [rsp+30h] [rbp-58h]
  int v14; // [rsp+34h] [rbp-54h]
  HANDLE Handle; // [rsp+38h] [rbp-50h] BYREF
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  _WORD *v17; // [rsp+48h] [rbp-40h] BYREF

  v17 = 0LL;
  Handle = 0LL;
  v13 = 0;
  result = TmCurrentTransaction_0(&Handle);
  v9 = result;
  v14 = result;
  if ( (_DWORD)result == -1073741637 )
  {
    v9 = 0;
    v14 = 0;
  }
  else if ( (int)result < 0 )
  {
    return result;
  }
  if ( Handle )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*((_DWORD *)CurrentThread + 29) & 0x400) != 0
      || *((_BYTE *)CurrentThread + 586) == 1
      || (v11 = *((_QWORD *)CurrentThread + 30)) == 0 )
    {
      v9 = -1072103400;
    }
    else
    {
      v13 = *(_WORD *)(v11 + 744);
      v9 = v14;
    }
  }
  if ( v9 < 0 || !Handle )
    return (unsigned int)v9;
  if ( sub_1403A0B00(a1)
    || (*(_WORD *)(a2 + 70) &= 1u, *(_DWORD *)(a2 + 88) == 1) && (a3 & 0xFEEDFF56) == 0
    || *(_BYTE *)(a2 + 137) )
  {
    Object = 0LL;
    if ( ObReferenceObjectByHandle(Handle, 0x120037u, (POBJECT_TYPE)TmTransactionObjectType, 1, &Object, 0LL) < 0 )
    {
      return (unsigned int)-1072103400;
    }
    else
    {
      v9 = sub_1402A38B4(a4, 0, 0x10u, 1, &v17, 0LL);
      if ( v9 >= 0 )
      {
        v12 = v17;
        *v17 = 16;
        v12[1] = v13;
        *((_QWORD *)v12 + 1) = Object;
        return (unsigned int)v9;
      }
      ObfDereferenceObject(Object);
    }
    return (unsigned int)v9;
  }
  return 3222863935LL;
}
