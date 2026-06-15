/*
 * XREFs of ??_GSendCommandAsyncOperation@Devices@Media@Windows@@UEAAPEAXI@Z @ 0x140081E2C
 * Callers:
 *     ??_ESendCommandAsyncOperation@Devices@Media@Windows@@WBA@EAAPEAXI@Z @ 0x140031D10 (--_ESendCommandAsyncOperation@Devices@Media@Windows@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1SendCommandAsyncOperation@Devices@Media@Windows@@UEAA@XZ @ 0x140080E6C (--1SendCommandAsyncOperation@Devices@Media@Windows@@UEAA@XZ.c)
 */

Windows::Media::Devices::SendCommandAsyncOperation *__fastcall Windows::Media::Devices::SendCommandAsyncOperation::`scalar deleting destructor'(
        Windows::Media::Devices::SendCommandAsyncOperation *this,
        char a2)
{
  Windows::Media::Devices::SendCommandAsyncOperation::~SendCommandAsyncOperation(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
