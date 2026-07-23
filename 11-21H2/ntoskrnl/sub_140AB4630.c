/*
 * XREFs of sub_140AB4630 @ 0x140AB4630
 * Callers:
 *     sub_14065A1F0 @ 0x14065A1F0 (sub_14065A1F0.c)
 *     sub_14067CE4C @ 0x14067CE4C (sub_14067CE4C.c)
 *     sub_14067DE90 @ 0x14067DE90 (sub_14067DE90.c)
 *     sub_1406A1370 @ 0x1406A1370 (sub_1406A1370.c)
 *     sub_1406A5C00 @ 0x1406A5C00 (sub_1406A5C00.c)
 *     sub_140713980 @ 0x140713980 (sub_140713980.c)
 *     sub_140714980 @ 0x140714980 (sub_140714980.c)
 *     sub_14071FAA0 @ 0x14071FAA0 (sub_14071FAA0.c)
 *     sub_1407C1130 @ 0x1407C1130 (sub_1407C1130.c)
 *     sub_1407C9930 @ 0x1407C9930 (sub_1407C9930.c)
 *     sub_1407E5600 @ 0x1407E5600 (sub_1407E5600.c)
 *     sub_14080F930 @ 0x14080F930 (sub_14080F930.c)
 *     sub_14090BC6C @ 0x14090BC6C (sub_14090BC6C.c)
 *     sub_14090E160 @ 0x14090E160 (sub_14090E160.c)
 *     sub_14090E310 @ 0x14090E310 (sub_14090E310.c)
 *     sub_14090E5E0 @ 0x14090E5E0 (sub_14090E5E0.c)
 *     sub_14090EF60 @ 0x14090EF60 (sub_14090EF60.c)
 *     sub_14090F3F0 @ 0x14090F3F0 (sub_14090F3F0.c)
 *     sub_14090F750 @ 0x14090F750 (sub_14090F750.c)
 *     sub_14090F9B0 @ 0x14090F9B0 (sub_14090F9B0.c)
 *     sub_140AB4770 @ 0x140AB4770 (sub_140AB4770.c)
 *     sub_140B12AF0 @ 0x140B12AF0 (sub_140B12AF0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall sub_140AB4630(void *a1, ACCESS_MASK a2, __int64 a3, KPROCESSOR_MODE a4, PVOID *a5, _QWORD *a6)
{
  _QWORD *v6; // rbx
  struct _OBJECT_HANDLE_INFORMATION *v7; // rax
  NTSTATUS v8; // edi
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v6 = a6;
  v7 = (struct _OBJECT_HANDLE_INFORMATION *)&v10;
  v10 = 0LL;
  Object = 0LL;
  if ( !a6 )
    v7 = 0LL;
  v8 = ObReferenceObjectByHandle(a1, a2, (POBJECT_TYPE)CmKeyObjectType, a4, &Object, v7);
  if ( v8 >= 0 )
  {
    if ( *(_DWORD *)Object == 1803104306 )
    {
      *a5 = Object;
      if ( v6 )
        *v6 = v10;
      return 0LL;
    }
    v8 = -1073741816;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v8;
}
